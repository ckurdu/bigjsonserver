#ifndef SERVER_H
#define SERVER_H

#include <QDialog>
#include <QString>
#include <QVector>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
class QLabel;
class QTcpServer;
class QNetworkSession;
QT_END_NAMESPACE

class Server : public QDialog
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);

private slots:
    void sessionOpened();
    void sendJsonPack();

private:
    QLabel *statusLabel = nullptr;
    QTcpServer *tcpServer = nullptr;
    QVector<QString> fortunes;
    QNetworkSession *networkSession = nullptr;
    const qint32 end_of_file = 4444;
};

#endif
