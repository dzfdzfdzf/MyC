/**
 * @file semanticana.h
 * @brief 语义分析界面头文件
 * @date 2023-5-24
 * @author 杜忠璠
*/
#ifndef SEMANTICANA_H
#define SEMANTICANA_H

#include <QWidget>
#include "mainwindow.h"
#include "semanticres.h"
namespace Ui {
class semanticana;
}
/**
 * @brief 语义分析界面类
*/
class semanticana : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief 语义分析界面构造函数
     * @param parent 父窗口
    */
    explicit semanticana(QWidget *parent = nullptr);
    
    /**
     * @brief 语义分析界面析构函数
    */
    ~semanticana();

private slots:

    /**
     * @brief 选择文件按钮槽函数
    */
    void on_pushButton_clicked();

    /**
     * @brief 读取文件按钮槽函数
    */
    void on_pushButton_2_clicked();

    /**
     * @brief 回车槽函数
    */
    void on_lineEdit_returnPressed();

    /**
     * @brief 保存文件按钮槽函数
    */
    void on_pushButton_3_clicked();

    /**
     * @brief 查看语义分析结果按钮槽函数
    */
    void on_pushButton_4_clicked();

    /**
     * @brief 返回按钮槽函数
    */
    void on_pushButton_5_clicked();

private:
    Ui::semanticana *ui;
};

#endif // SEMANTICANA_H
