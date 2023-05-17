#include "semanticres.h"
#include "ui_semanticres.h"

semanticres::semanticres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::semanticres)
{
    ui->setupUi(this);
    QFont font1=ui->label->font();
    QFont font2=ui->plainTextEdit->font();
    font1.setPointSize(15);
    font2.setPointSize(12);
    ui->label->setFont(font1);
    ui->plainTextEdit->setFont(font2);
    setWindowTitle("语义分析结果");
}
void semanticres::setRes(){
    submain(this->path.toStdString().c_str());
//    qDebug()<<1;

//    QFile file2("D:/CPLAB/MyC_QT/res.txt");
     QFile file("Quad.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
              QMessageBox::warning(this, tr("错误"), tr("文件不存在"));
              return;
          }
     QTextStream in(&file);
     QString content = in.readAll();
//     qDebug()<<content;
     ui->plainTextEdit->setPlainText(content);
     ui->plainTextEdit->setReadOnly(1);
     file.close();
}
semanticres::~semanticres()
{
    delete ui;
}

void semanticres::on_pushButton_clicked()
{
    this->close();
    semanticana *ana=new semanticana();
    ana->show();
}

