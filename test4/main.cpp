#include <QApplication>
#include "mywindow.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWindow myWindow;
    myWindow.show();

    return a.exec();
}
