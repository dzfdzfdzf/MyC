/**
 * @file lexicalana.h   
 * @brief 词法分析界面头文件
 * @date 2023-5-24
 * @author 杜忠璠
*/
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
/**
 * @brief 词法分析界面类
*/
class LexicalAna : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief 词法分析界面构造函数
     * @param parent 父窗口
    */
    explicit LexicalAna(QWidget *parent = nullptr);
    /**
     * @brief 词法分析界面析构函数
    */
    ~LexicalAna();

private slots:
    /**
     * @brief 确认按钮槽函数
    */
    void on_pushButton_clicked();

    /**
     * @brief 回车键槽函数
    */
    void on_lineEdit_returnPressed();

    /**
     * @brief 保存按钮槽函数
    */
    void on_pushButton_2_clicked();

    /**
     * @brief 选择文件按钮槽函数
    */
    void on_pushButton_3_clicked();

    /**
     * @brief 开始进行词法分析槽函数
    */
    void on_pushButton_4_clicked();

    /**
     * @brief 返回按钮槽函数    
    */
    void on_pushButton_5_clicked();

private:
    Ui::LexicalAna *ui;
};

#endif // LEXICALANA_H
