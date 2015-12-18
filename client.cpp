#include "client.h"

Client::Client(QObject *parent):QObject(parent)
{
    m_pseudo="anonymus";
    m_socket = new QTcpSocket(this);
}


QString Client::pseudo() const
{
    return m_pseudo;
}

void Client::setPseudo(const QString &pseudo)
{
    m_pseudo = pseudo;
}
