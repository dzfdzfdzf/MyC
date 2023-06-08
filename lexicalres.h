/**
 * @file lexicalres.h
 * @brief 词法分析结果界面头文件
 * @date 2023-05-31
 * @author 杜忠璠
*/
#ifndef LEXICALRES_H
#define LEXICALRES_H

#include <QWidget>
#include "lexicalana.h"
#include "y.tab.h"
#include <QDebug>
namespace Ui {
class lexicalRes;
}
/**
 * @brief 词法分析结果界面类
*/
class lexicalRes : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief 词法分析结果界面构造函数
     * @param parent 父窗口
    */
    explicit lexicalRes(QWidget *parent = nullptr);
    /**
     * @brief 词法分析结果界面析构函数
    */
    ~lexicalRes();
    /**
     * @brief 设置符号表
    */
    void setTable();
    QString path;//文件路径

private slots:
    /**
     * @brief 返回按钮槽函数
    */
    void on_pushButton_clicked();

private:
    Ui::lexicalRes *ui;
};

#endif // LEXICALRES_H
