#include "pingchat_gui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PingChat_Gui w;
    w.show();


    return a.exec();
}
