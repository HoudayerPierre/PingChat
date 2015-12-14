#ifndef PINGCHAT_CORE_H
#define PINGCHAT_CORE_H

#include <QMainWindow>

namespace Ui {
class PingChat_Core;
}

class PingChat_Core : public QMainWindow
{
    Q_OBJECT

public:
    explicit PingChat_Core(QWidget *parent = 0);
    ~PingChat_Core();

private:
    Ui::PingChat_Core *ui;
};

#endif // PINGCHAT_CORE_H
