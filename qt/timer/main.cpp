#include "mainwindow.h"

#include "../../timer.cpp"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(200,80);
    QLabel *label = new QLabel(&w);
    label->setText(QString::fromStdString(mains()));

    w.show();
    return a.exec();
}
