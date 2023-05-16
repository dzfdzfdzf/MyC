#include "lexicalres.h"
#include "ui_lexicalres.h"

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

lexicalRes::~lexicalRes()
{
    delete ui;
}
void lexicalRes::setTable(){
    submain(this->path.toStdString().c_str());
//    qDebug()<<1;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setWindowTitle("符号表");
    ui->tableWidget->setColumnCount(3);
    QStringList headers;
    headers<<"Name"<<"Type"<<"kind";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

//    QFile file(this->path);
//    QFile file("D:/CPLAB/MyC_QT/symtable.txt");
    QFile file("symtable.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
              QMessageBox::warning(this, tr("错误"), tr("文件不存在"));
              return;
          }
//    qDebug()<<this->path;
    QTextStream in(&file);
//     QString content = in.readAll();
//     ui->plainTextEdit_2->setPlainText(content);
//    in.seek(0);
//    qDebug()<<in.atEnd();
    while (!in.atEnd())
       {
//             qDebug()<<1;
           QString line = in.readLine();
           QStringList items = line.split("\t"); // 假设每一列数据以制表符分隔
//            qDebug()<<line<<Qt::endl;
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
//    QFile file2("D:/CPLAB/MyC_QT/res.txt");
     QFile file2("res.txt");

    if (!file2.open(QIODevice::ReadOnly | QIODevice::Text))
        if (!file2.open(QIODevice::ReadOnly | QIODevice::Text)) {
              QMessageBox::warning(this, tr("错误"), tr("文件不存在"));
              return;
          }
     QTextStream in2(&file2);
     QString content = in2.readAll();
//     qDebug()<<content;
     ui->plainTextEdit->setPlainText(content);
     ui->plainTextEdit->setReadOnly(1);
     file2.close();

}
void lexicalRes::on_pushButton_clicked()
{
    this->close();
    LexicalAna *ana=new LexicalAna();
    ana->show();
}

