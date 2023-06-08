/**
 * @file semanticres.cpp
 * @brief 语义分析结果界面
 * @date 2023-5-31
 * @author 杜忠璠
*/
#include "semanticres.h"
#include "ui_semanticres.h"

/**
 * @brief 语义分析结果界面构造函数
*/
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
/**
 * @brief 语义分析结果界面显示结果
*/
void semanticres::setRes(){
    submain(this->path.toStdString().c_str());

     QFile file("Quad.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
              QMessageBox::warning(this, tr("错误"), tr("文件不存在"));
              return;
          }
     QTextStream in(&file);
     QString content = in.readAll();
     ui->plainTextEdit->setPlainText(content);
     ui->plainTextEdit->setReadOnly(1);
     file.close();
}
/**
 * @brief 语义分析结果界面析构函数
*/
semanticres::~semanticres()
{
    delete ui;
}
/**
 * @brief 返回按钮槽函数
*/
void semanticres::on_pushButton_clicked()
{
    this->close();
    semanticana *ana=new semanticana();
    ana->show();
}

