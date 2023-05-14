#ifndef SYNTACTICANA_H
#define SYNTACTICANA_H

#include <QWidget>
#include "mainwindow.h"
#include "syntacticres.h"
namespace Ui {
class syntacticana;
}

class syntacticana : public QWidget
{
    Q_OBJECT

public:
    explicit syntacticana(QWidget *parent = nullptr);
    ~syntacticana();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::syntacticana *ui;
};

#endif // SYNTACTICANA_H
