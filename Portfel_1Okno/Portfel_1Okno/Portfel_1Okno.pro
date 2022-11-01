QT       += core gui
QT+=network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dodaj.cpp \
    http.cpp \
    main.cpp \
    mainwindow.cpp \
    przelicz.cpp

HEADERS += \
    dodaj.h \
    http.h \
    mainwindow.h \
    przelicz.h

FORMS += \
    dodaj.ui \
    mainwindow.ui \
    przelicz.ui

TRANSLATIONS += \
    Portfel_1Okno_pl_PL.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    zapis.txt

RESOURCES += \
    Zasoby.qrc
