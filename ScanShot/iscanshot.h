#ifndef ISCANSHOT_H
#define ISCANSHOT_H

#include <QObject>
/**
 * @brief The IScanShot class
 * 支持扫码枪热插拔，使用时需要手动确认扫码枪的VID和PID
 * 使用时请在主工程.pro文件中添加 serialport 模块
 */
class IScanShot : public QObject
{
    Q_OBJECT
public:
    explicit IScanShot(QObject *parent = nullptr):QObject(parent){};
    ~IScanShot(){};
signals:
    //转成字符需要进行fromLocal8Bit转换。    qDebug()<<QString::fromLocal8Bit(data);////
    void SignalScanOnInfo(const QByteArray &data);
};

class Factory_IScanShot
{
public:
    static IScanShot* createScanShot(int vid,int pid,QObject *parent = nullptr);
};

#endif // ISCANSHOT_H
