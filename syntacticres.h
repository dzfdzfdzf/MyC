#ifndef SYNTACTICRES_H
#define SYNTACTICRES_H

#include <QWidget>
#include "syntacticana.h"
namespace Ui {
class syntacticres;
}

class syntacticres : public QWidget
{
    Q_OBJECT

public:
    explicit syntacticres(QWidget *parent = nullptr);
    ~syntacticres();
     QString path;
    void setRes();
private slots:
     void on_pushButton_clicked();

private:
    Ui::syntacticres *ui;
};

#endif // SYNTACTICRES_H
