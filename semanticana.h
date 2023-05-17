#ifndef SEMANTICANA_H
#define SEMANTICANA_H

#include <QWidget>
#include "mainwindow.h"
#include "semanticres.h"
namespace Ui {
class semanticana;
}

class semanticana : public QWidget
{
    Q_OBJECT

public:
    explicit semanticana(QWidget *parent = nullptr);
    ~semanticana();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_returnPressed();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::semanticana *ui;
};

#endif // SEMANTICANA_H
