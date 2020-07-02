#include "kinova_voice_control.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kinova_voice_control w;
    w.show();

    return a.exec();
}
