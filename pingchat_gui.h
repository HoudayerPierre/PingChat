#ifndef PingChat_Gui_H
#define PingChat_Gui_H

#include <QtWidgets/QMainWindow>

namespace Ui {
    class PingChat_Gui;
}

/*!
 * \file pingchat_gui.h
 *
 * \class PingChat_Gui
 *
 * \brief PingChat_Gui core of PingChat application
 *
 * \author GUEDON Damien and HOUDAYER Pierre
 *
 * \version 0.1
 *
 * \date 14 Dec 2015
 *
 */
class PingChat_Gui : public QMainWindow
{
    Q_OBJECT

    public:
        /*!
         * \fn bool PingChat_Gui(QWidget *parent = 0)
         *
         * \brief Class builder of PingChat_Gui.
         */
        explicit PingChat_Gui(QWidget *parent = 0);
        ~PingChat_Gui();

    private:
        Ui::PingChat_Gui *ui;
};

#endif // PingChat_Gui_H
