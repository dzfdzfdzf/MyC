#include "lexicalana.h"
#include "ui_lexicalana.h"

LexicalAna::LexicalAna(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LexicalAna)
{
    ui->setupUi(this);
    QFont font1=ui->label->font();
    QFont font2=ui->lineEdit->font();
    QFont font3=ui->plainTextEdit->font();
    font1.setPointSize(18);
    font2.setPointSize(15);
    font3.setPointSize(15);
    ui->label->setFont(font1);
    ui->lineEdit->setFont(font2);
    ui->plainTextEdit->setFont(font3);
    setWindowTitle("词法分析");
}

LexicalAna::~LexicalAna()
{
    delete ui;
}

void LexicalAna::on_pushButton_clicked()
{
    QString path=ui->lineEdit->text();
    QFileInfo fileInfo(path);

    // 检查文件扩展名
    if (fileInfo.suffix().toLower() != "txt") {
        QMessageBox::warning(this, tr("错误"), tr("请选择一个txt类型的文件"));
        return;
    }
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
              QMessageBox::warning(this, tr("错误"), tr("文件不存在"));
              return;
          }

    QTextStream in(&file);
    QString content = in.readAll();
    ui->plainTextEdit->setPlainText(content);
    file.close();
}


void LexicalAna::on_lineEdit_returnPressed()
{
    ui->pushButton->click();
}


void LexicalAna::on_pushButton_2_clicked()
{
    QString filePath = ui->lineEdit->text();
       QFile file(filePath);

       if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
           QMessageBox::warning(this, tr("错误"), tr("无法保存文件"));
           return;
       }

       QTextStream out(&file);
       QString content = ui->plainTextEdit->toPlainText();
       out << content;

       file.close();
       QMessageBox::information(this, tr("成功"), tr("文件已保存"));
}


void LexicalAna::on_pushButton_3_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("选择文件"), "", tr("Text Files (*.txt);;All Files (*)"));

      if (!filePath.isEmpty()) {
          ui->lineEdit->setText(filePath);
      }
}


void LexicalAna::on_pushButton_4_clicked()
{
    this->close();
    lexicalRes *res=new lexicalRes();
    res->show();

}

