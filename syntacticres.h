/**
 * @file syntacticres.h
 * @brief 语法分析结果界面头文件
 * @date 2023-05-31
 * @author 杜忠璠
*/
#ifndef SYNTACTICRES_H
#define SYNTACTICRES_H

#include <QWidget>
#include "syntacticana.h"

namespace Ui {
class syntacticres;
}
/**
 * @brief 语法分析结果界面类
*/
class syntacticres : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief 语法分析结果界面构造函数
     * @param parent 父窗口
    */
    explicit syntacticres(QWidget *parent = nullptr);

    /**
     * @brief 语法分析结果界面析构函数
    */
    ~syntacticres();
     QString path;//文件路径

     /**
      * @brief 设置语法分析结果
     */
    void setRes();
private slots:
    /**
     * @brief 返回按钮槽函数
    */
     void on_pushButton_clicked();

private:
    Ui::syntacticres *ui;
};

#endif // SYNTACTICRES_H
