#include "pingchat_gui.h"
#include "ui_pingchat_gui.h"

PingChat_Gui::PingChat_Gui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PingChat_Gui)
{
    ui->setupUi(this);
}

PingChat_Gui::~PingChat_Gui()
{
    delete ui;
}
