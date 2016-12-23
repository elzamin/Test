INCLUDEPATH += /opt/Qt/5.7/Src/qtbase/include/QtWidgets

TEMPLATE = app
TARGET = so_qtwidgets
INCLUDEPATH += .

QT += widgets

SOURCES += \
    main.cpp \
    processtable.cpp \
    systemmonitor.cpp \
    info.cpp

HEADERS += \
    processtable.h \
    systemmonitor.h \
    info.h
