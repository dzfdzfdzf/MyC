#ifndef LEXICALRES_H
#define LEXICALRES_H

#include <QWidget>
#include "lexicalana.h"
#include "lex.yy.h"
#include <QDebug>
namespace Ui {
class lexicalRes;
}

class lexicalRes : public QWidget
{
    Q_OBJECT

public:
    explicit lexicalRes(QWidget *parent = nullptr);
    ~lexicalRes();
    void setTable();
    QString path;

private slots:
    void on_pushButton_clicked();

private:
    Ui::lexicalRes *ui;
};

#endif // LEXICALRES_H
