/**
 * @file main.cpp
 * @brief 主函数
 * @date 2023-5-24
 * @author 杜忠璠
 */
#include "mainwindow.h"
#include "welcome.h"
#include <QApplication>

int main(int argc, char *argv[])
{   
    QApplication a(argc, argv);
    MainWindow w;
    welcome we;
    we.show();

    return a.exec();
}
