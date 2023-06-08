/**
 * @file syntacticana.h
 * @brief 语法分析界面头文件
 * @date 2023-05-31
 * @author 杜忠璠
*/
#ifndef SYNTACTICANA_H
#define SYNTACTICANA_H

#include <QWidget>
#include "mainwindow.h"
#include "syntacticres.h"
namespace Ui {
class syntacticana;
}
/**
 * @brief 语法分析界面类
*/
class syntacticana : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief 语法分析界面构造函数
     * @param parent 父窗口
    */
    explicit syntacticana(QWidget *parent = nullptr);
    /**
     * @brief 语法分析界面析构函数
    */
    ~syntacticana();

private slots:
    /**
     * @brief 返回按钮槽函数
    */
    void on_pushButton_5_clicked();

    /**
     * @brief 选择文件按钮槽函数
    */
    void on_pushButton_clicked();

    /**
     * @brief 读取文件按钮槽函数
    */
    void on_pushButton_2_clicked();

    /**
     * @brief 保存文件按钮槽函数
    */
    void on_pushButton_4_clicked();

    /**
     * @brief 查看语法分析结果按钮槽函数
    */
    void on_pushButton_3_clicked();

    /**
     * @brief 回车槽函数
    */
    void on_lineEdit_returnPressed();

private:
    Ui::syntacticana *ui;
};

#endif // SYNTACTICANA_H
