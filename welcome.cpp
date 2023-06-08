/**
 * @file welcome.cpp
 * @brief 欢迎界面
 * @date 2023-05-24
 * @auther 杜忠璠
*/
#include "welcome.h"
#include "ui_welcome.h"

/**
 * @brief 欢迎界面构造函数
 * @param parent 父窗口
*/
welcome::welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
    QFont font1=ui->label->font();
    QFont font2=ui->pushButton->font();
    QFont font3=ui->label_2->font();
    font1.setPointSize(24);
    font2.setPointSize(15);
    font3.setPointSize(10);
    ui->label->setFont(font1);
    ui->pushButton->setFont(font2);
    ui->label_2->setFont(font3);
    setWindowTitle("MyC编译器");
}

/**
 * @brief 欢迎界面析构函数
*/
welcome::~welcome()
{
    delete ui;
}
/**
 * @brief 开始按钮槽函数
*/
void welcome::on_pushButton_clicked()
{
    this->close();
    MainWindow *mw=new MainWindow();
    mw->show();

}

