#include "welcome.h"
#include "ui_welcome.h"

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

welcome::~welcome()
{
    delete ui;
}

void welcome::on_pushButton_clicked()
{
    this->close();
    MainWindow *mw=new MainWindow();
    mw->show();

}

