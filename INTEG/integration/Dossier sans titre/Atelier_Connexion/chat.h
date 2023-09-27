#ifndef CHAT_H
#define CHAT_H
#include <QDialog>
#include <QUdpSocket>
//#include <QtConcurrent>
#include <QFuture>
#include <QNetworkInterface>
#include <QProcess>
#include "ui_chat.h"

namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();

private slots:
    void on_sendButton_clicked();
    void readPendingDatagrams();
    bool send(QString);
    //QString read(QString);
    QString get_ip();

    void on_connect_udp_clicked();

private:
    Ui::chat *ui;
//    QUdpSocket *socketServer;
//    QUdpSocket *socketServerc;
    QUdpSocket *clientSocket;
    QUdpSocket *clientSocketc;

};

#endif // CHAT_H
