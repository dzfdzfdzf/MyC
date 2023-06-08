/**
 * @file mainwindow.cpp
 * @brief 主界面
 * @date 2023-5-24
 * @author 杜忠璠
 * 
*/
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
/**
 * @brief 主界面析构函数
*/
MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief 词法分析按钮槽函数
*/
void MainWindow::on_pushButton_2_clicked()
{
    this->close();
    LexicalAna *lex=new LexicalAna();
    lex->show();
}

/**
 * @brief 语法分析按钮槽函数
*/
void MainWindow::on_pushButton_3_clicked()
{
    this->close();
    syntacticana *syn=new syntacticana();
    syn->show();
}

/**
 * @brief 语义分析按钮槽函数
*/
void MainWindow::on_pushButton_clicked()
{
    this->close();
    semanticana *sem=new semanticana();
    sem->show();

}

