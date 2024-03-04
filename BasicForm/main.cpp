#include "mainwindow.h"
#include "formlayout.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget* q = nullptr;
    formLayout obj(q);
    obj.show();
    //w.show();

    return a.exec();
}
