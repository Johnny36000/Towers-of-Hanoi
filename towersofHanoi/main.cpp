#include "towersofhanoi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TowersofHanoi w;
    w.show();
    return a.exec();
}
