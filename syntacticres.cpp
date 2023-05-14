#include "syntacticres.h"
#include "ui_syntacticres.h"

syntacticres::syntacticres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::syntacticres)
{
    ui->setupUi(this);
    QFont font1=ui->label->font();
    QFont font2=ui->label_2->font();
    QFont font3=ui->plainTextEdit->font();
    QFont font4=ui->plainTextEdit_2->font();
    font1.setPointSize(15);
    font2.setPointSize(15);
    font3.setPointSize(12);
    font4.setPointSize(12);
    ui->label->setFont(font1);
    ui->label_2->setFont(font2);
    ui->plainTextEdit->setFont(font3);
    ui->plainTextEdit_2->setFont(font4);
    setWindowTitle("语法分析结果");
}

syntacticres::~syntacticres()
{
    delete ui;
}
void syntacticres::setRes(){
    submain(this->path.toStdString().c_str());
//    qDebug()<<1;

//    QFile file2("D:/CPLAB/MyC_QT/res.txt");
     QFile file("result.txt");

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
     QFile file2("Output.txt");

    if (!file2.open(QIODevice::ReadOnly | QIODevice::Text))
        if (!file2.open(QIODevice::ReadOnly | QIODevice::Text)) {
              QMessageBox::warning(this, tr("错误"), tr("文件不存在"));
              return;
          }
     QTextStream in2(&file2);
     QString content2 = in2.readAll();
   qDebug()<<content2;
     ui->plainTextEdit_2->setPlainText(content2);
     ui->plainTextEdit_2->setReadOnly(1);
     file2.close();

}
void syntacticres::on_pushButton_clicked()
{
    this->close();
    syntacticana *ana=new syntacticana();
    ana->show();
}

