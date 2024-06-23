#include "dialog.h"

#include <QApplication> //QApplication 每个Qt图形化应用程序中都必须使用的一个对象,  管理了各种各样的图形化应用程序的广泛资源, 基本设置, 控制流及事件处理

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
