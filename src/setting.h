#ifndef SETTING_H
#define SETTING_H

#include <QDialog>

namespace Ui {
class Setting;
}

/*!
 * \file setting.h
 *
 * \class Setting
 *
 * \brief Setting user interface of settings in PingChat application.
 *
 * \author GUEDON Damien and HOUDAYER Pierre
 *
 * \version 0.1
 *
 * \date 19 Dec 2015
 *
 */
class Setting : public QDialog
{
    Q_OBJECT

    public:
        /*!
         * \fn bool Setting(QWidget *parent = 0)
         *
         * \brief Class builder of Setting.
         */
        explicit Setting(QWidget *parent = 0);
        ~Setting();

    private:
        Ui::Setting *ui;
};

#endif // SETTING_H
