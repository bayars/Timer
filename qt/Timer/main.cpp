#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
//#include "../../main.cpp"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
//    mains main;
//    QWidget window;
//    window.setFixedSize(100,50);
    QPushButton button ("Second Timer");
    QPushButton button1 ("Minute Timer",&button);
//    QPushButton button2 ("Hours Times",&button1);
    button.show();
    return app.exec();
}
