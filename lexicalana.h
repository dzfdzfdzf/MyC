#ifndef LEXICALANA_H
#define LEXICALANA_H

#include <QWidget>
#include<QFile>
#include<QMessageBox>
#include <QTextStream>
#include <QFileInfo>
#include <QFileDialog>
#include "lexicalres.h"
#include "mainwindow.h"
namespace Ui {
class LexicalAna;
}

class LexicalAna : public QWidget
{
    Q_OBJECT

public:
    explicit LexicalAna(QWidget *parent = nullptr);
    ~LexicalAna();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::LexicalAna *ui;
};

#endif // LEXICALANA_H
