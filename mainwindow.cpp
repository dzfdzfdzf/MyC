#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont font1=ui->label->font();
    QFont font2=ui->pushButton->font();
    QFont font3=ui->pushButton_2->font();
    QFont font4=ui->pushButton_3->font();
    font1.setPointSize(24);
    font2.setPointSize(15);
    font3.setPointSize(15);
    font4.setPointSize(15);
    ui->label->setFont(font1);
    ui->pushButton->setFont(font2);
    ui->pushButton_2->setFont(font3);
    ui->pushButton_3->setFont(font4);
    setWindowTitle("选择操作");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    this->close();
    LexicalAna *lex=new LexicalAna();
    lex->show();
}

