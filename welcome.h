/**
 * @file welcome.h
 * @brief 欢迎界面头文件
 * @date 2023-05-24
 * @author 杜忠璠
*/
#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class welcome;
}
/**
 * @brief 欢迎界面类
*/
class welcome : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief 欢迎界面构造函数
     * @param parent 父窗口
    */
    explicit welcome(QWidget *parent = nullptr);
    /**
     * @brief 欢迎界面析构函数
    */
    ~welcome();


private slots:
    /**
     * @brief 开始按钮槽函数
    */
    void on_pushButton_clicked();

private:
    Ui::welcome *ui;
};

#endif // WELCOME_H
