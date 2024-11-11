INCLUDEPATH +=  \
    $$PWD/ScanShot
DEPENDPATH  +=  \
    $$PWD/ScanShot

HEADERS += \
    $$PWD/ScanShot/iscanshot.h

win32:CONFIG(release, debug|release):    LIBS += -L$$PWD/ScanShot/ -lScanShot
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/ScanShot/ -lScanShotd
