#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>

/*!
 * \file client.h
 *
 * \class Client
 *
 * \brief Client Peer in PingChat application network.
 *
 * \author GUEDON Damien and HOUDAYER Pierre
 *
 * \version 0.1
 *
 * \date 19 Dec 2015
 *
 */
class Client : public QObject
{

Q_OBJECT

    public:
        /*!
         * \fn bool Client(QWidget *parent = 0)
         *
         * \brief Class builder of Client.
         */
        Client(QObject * parent = 0);

        /*!
         * \fn bool pseudo(QWidget *parent = 0)
         *
         * \brief get the nick of user in PingChat.
         *
         * \return QString nick of user in PingChat.
         */
        QString pseudo() const;

        /*!
         * \fn bool pseudo(QWidget *parent = 0)
         *
         * \param QString &pseudo nick of user to use on PingChat application network.
         *
         * \brief set the nick of user in PingChat.
         */
        void setPseudo(const QString &pseudo);

    private:
        //nom
        QString m_pseudo;

        //socket
        QTcpSocket *m_socket;


};

#endif // CLIENT_H
