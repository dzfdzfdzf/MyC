/**
 * @file lexicalres.cpp
 * @brief 词法分析结果界面
 * @date 2023-5-24
 * @author 杜忠璠 
*/
#include "lexicalres.h"
#include "ui_lexicalres.h"

/**
 * @brief 词法分析结果界面构造函数
 * @param parent 父窗口
*/ 
lexicalRes::lexicalRes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lexicalRes)
{
    ui->setupUi(this);
    QFont font1=ui->label->font();
    QFont font2=ui->label_2->font();
    font1.setPointSize(15);
    font2.setPointSize(15);

    ui->label->setFont(font1);
    ui->label_2->setFont(font2);

    setWindowTitle("词法分析结果");

}
/**
 * @brief 词法分析结果界面析构函数
*/
lexicalRes::~lexicalRes()
{
    delete ui;
}
/**
 * @brief 设置符号表
*/
void lexicalRes::setTable(){
    submain(this->path.toStdString().c_str());
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setWindowTitle("符号表");
    ui->tableWidget->setColumnCount(3);
    QStringList headers;
    headers<<"Name"<<"Type"<<"Kind";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QFile file("symtable.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
              QMessageBox::warning(this, tr("错误"), tr("文件不存在"));
              return;
          }
    QTextStream in(&file);
    while (!in.atEnd())
       {
           QString line = in.readLine();
           QStringList items = line.split("\t"); // 假设每一列数据以制表符分隔
           // 添加新行
           int row = ui->tableWidget->rowCount();
           ui->tableWidget->insertRow(row);

           // 填充数据
           for (int column = 0; column < 3; ++column)
           {
               QTableWidgetItem *item = new QTableWidgetItem(items[column]);
               ui->tableWidget->setItem(row, column, item);
           }
       }
    file.close();
    ui->tableWidget->show();
     QFile file2("res.txt");
    
    if (!file2.open(QIODevice::ReadOnly | QIODevice::Text))
        if (!file2.open(QIODevice::ReadOnly | QIODevice::Text)) {
              QMessageBox::warning(this, tr("错误"), tr("文件不存在"));
              return;
          }
     QTextStream in2(&file2);
     QString content = in2.readAll();
     ui->plainTextEdit->setPlainText(content);
     ui->plainTextEdit->setReadOnly(1);
     file2.close();

}
/**
 * @brief 返回按钮槽函数
*/
void lexicalRes::on_pushButton_clicked()
{
    this->close();
    LexicalAna *ana=new LexicalAna();
    ana->show();
}

