#include "pingchat_core.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PingChat_Core w;
    w.show();

    return a.exec();
}
