# qimhangul project file

TEMPLATE = lib
TARGET = qimhangul
VERSION = 0.2.0
DISTFILES += ChangeLog ChangeLog.old COPYING AUTHORS README
QT_PLUGIN_DIR = $$[QT_INSTALL_PLUGINS]

target.path = $${QT_PLUGIN_DIR}/inputmethods
INSTALLS += target

CONFIG += debug plugin qt thread

# Input
HEADERS += \
    qinputcontexthangul.h \
    qinputcontextpluginhangul.h \
    candidatelist.h

SOURCES += \
    qinputcontexthangul.cpp \
    qinputcontextpluginhangul.cpp \
    candidatelist.cpp

INCLUDEPATH += $$system(pkg-config libhangul --cflags-only-I | sed -e 's/-I//')
LIBS += $$system(pkg-config libhangul --libs)

unix {
    SOURCES += qinputcontexthangul_x11.cpp
}
