#include "pingchat_core.h"
#include "ui_pingchat_core.h"

PingChat_Core::PingChat_Core(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PingChat_Core)
{
    ui->setupUi(this);
}

PingChat_Core::~PingChat_Core()
{
    delete ui;
}
