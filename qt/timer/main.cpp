#include "mainwindow.h"
#include <chrono>
#include <thread>
#include <ctime>



#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel * lbl = new QLabel("Test",&w);
    w.setFixedSize(100,100);
    int second = 5;
    std::chrono::seconds s (second);
    std::chrono::seconds i (0);
    while (i <= s){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        s--;
        std::string t = std::to_string(std::chrono::seconds(s).count());
        QString qstr = QString ::fromStdString(t);
        lbl->setText(qstr);
        w.update();
    }
    w.show();
    return a.exec();
}
