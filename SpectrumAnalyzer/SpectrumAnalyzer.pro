QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += include/
VPATH +=src/

SOURCES += \
    Mainpage.cpp \
    concentration.cpp \
    error1.cpp \
    graphinfo.cpp \
    home.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    selecttype.cpp

HEADERS += \
    Mainpage.h \
    concentration.h \
    error1.h \
    graphinfo.h \
    home.h \
    include/mainwindow.h \
    include/qcustomplot.h \
    selecttype.h

FORMS += \
    Mainpage.ui \
    concentration.ui \
    error1.ui \
    graphinfo.ui \
    home.ui \
    mainwindow.ui \
    selecttype.ui


# QXlsx code for Application Qt project
QXLSX_PARENTPATH=./         # current QXlsx path is . (. means curret directory)
QXLSX_HEADERPATH=./header/  # current QXlsx header path is ./header/
QXLSX_SOURCEPATH=./source/  # current QXlsx source path is ./source/
include(./QXlsx.pri)


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    resources.qrc

SUBDIRS += \
    QXlsx/QXlsx.pro \
    QXlsx/QXlsx.pro
