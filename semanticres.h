#ifndef SEMANTICRES_H
#define SEMANTICRES_H

#include <QWidget>
#include "semanticana.h"
namespace Ui {
class semanticres;
}

class semanticres : public QWidget
{
    Q_OBJECT

public:
    explicit semanticres(QWidget *parent = nullptr);
    ~semanticres();
    QString path;
    void setRes();

private slots:
    void on_pushButton_clicked();

private:
    Ui::semanticres *ui;
};

#endif // SEMANTICRES_H
