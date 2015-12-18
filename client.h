#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>

class Client : public QObject
{

Q_OBJECT

    public:
        Client(QObject * parent = 0);

        QString getPseudo() const;
        void setPseudo(const QString &pseudo);



private:
        //nom de l'utilisateur
        QString m_pseudo;

        //socket
        QTcpSocket *m_socket;


};

#endif // CLIENT_H
