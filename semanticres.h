/**
 * @file semanticres.h
 * @brief 语义分析结果界面头文件
 * @date 2023-05-31
 * @author 杜忠璠
*/
#ifndef SEMANTICRES_H
#define SEMANTICRES_H

#include <QWidget>
#include "semanticana.h"
namespace Ui {
class semanticres;
}
/**
 * @brief 语义分析结果界面类
*/
class semanticres : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief 语义分析结果界面构造函数
     * @param parent 父窗口
    */
    explicit semanticres(QWidget *parent = nullptr);
    
    /**
     * @brief 语义分析结果界面析构函数
     * @param parent 父窗口
    */
    ~semanticres();
    QString path; //文件路径

    /**
     * @brief 设置语义分析结果
    */
    void setRes();

private slots:
    /**
     * @brief 返回按钮槽函数
    */
    void on_pushButton_clicked();

private:
    Ui::semanticres *ui;
};

#endif // SEMANTICRES_H
