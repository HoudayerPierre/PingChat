#ifndef PINGCHAT_CORE_H
#define PINGCHAT_CORE_H

#include <QMainWindow>

namespace Ui {
    class PingChat_Core;
}

/*!
 * \file pingchat_core.h
 *
 * \class PingChat_Core
 *
 * \brief PingChat_Core core of PingChat application
 *
 * \author GUEDON Damien and HOUDAYER Pierre
 *
 * \version 0.1
 *
 * \date 14 Dec 2015
 *
 */
class PingChat_Core : public QMainWindow
{
    Q_OBJECT

    public:
        /*!
         * \fn bool PingChat_Core(QWidget *parent = 0)
         *
         * \brief Class builder of PingChat_Core.
         */
        explicit PingChat_Core(QWidget *parent = 0);
        ~PingChat_Core();

    private:
        Ui::PingChat_Core *ui;
};

#endif // PINGCHAT_CORE_H
