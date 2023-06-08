/**
 * @file mainwindow.h
 * @brief 主界面头文件
 * @date 2023-5-24
 * @author 杜忠璠
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lexicalana.h"
#include "syntacticana.h"
#include "semanticana.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief 主界面类
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief 主界面构造函数
     * @param parent 父窗口
    */
    MainWindow(QWidget *parent = nullptr);
    
    /**
     * @brief 主界面析构函数
    */
    ~MainWindow();

private slots:
    /**
     * @brief 词法分析按钮槽函数
    */
    void on_pushButton_2_clicked();

    /**
     * @brief 语法分析按钮槽函数
    */
    void on_pushButton_3_clicked();

    /**
     * @brief 语义分析按钮槽函数
    */
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
