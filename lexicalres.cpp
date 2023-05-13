#include "lexicalres.h"
#include "ui_lexicalres.h"

lexicalRes::lexicalRes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lexicalRes)
{
    ui->setupUi(this);
}

lexicalRes::~lexicalRes()
{
    delete ui;
}
void lexicalRes::setText1(QString s){
    this->path=s;
}
void lexicalRes::on_pushButton_clicked()
{
    this->close();
    LexicalAna *ana=new LexicalAna();
    ana->show();
}

