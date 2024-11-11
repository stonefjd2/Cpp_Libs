#ifndef ISCANSHOT_H
#define ISCANSHOT_H
#include <QObject>
/**
 * @brief The IScanShot class
 * support hot switch ,check VID and PID in device manage
 * add serialport module in .pro
 */
class IScanShot : public QObject
{
    Q_OBJECT
public:
    explicit IScanShot(QObject *parent = nullptr):QObject(parent){};
    ~IScanShot(){};
signals:
    /**
     * @brief SignalScanOnInfo
     * if want print, may need to use "QString::fromLocal8Bit(data)"
     * @param data
     */
    void SignalScanOnInfo(const QByteArray &data);
};

class Factory_IScanShot
{
public:
    static IScanShot* createScanShot(int vid,int pid,QObject *parent = nullptr);
};

#endif // ISCANSHOT_H
