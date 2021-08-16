QT += testlib \
    gui \
    sql \
    widgets

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += \
    ../../src/world.h \
    ../../src/dataproxy_sqlite.h \
    ../../src/locator.h \
    ../../src/utilities.h \
    ../../src/database.h \
    ../../src/qso.h \
    ../../src/klogconfig.h

SOURCES +=  tst_world.cpp \
    ../../src/world.cpp \
    ../../src/dataproxy_sqlite.cpp \
    ../../src/qso.cpp \
    ../../src/utilities.cpp \
    ../../src/database.cpp \
    ../../src/locator.cpp \
    ../../src/klogconfig.cpp



isEmpty(QMAKE_LRELEASE) {
    win32|os2:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]\lrelease.exe
    else:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]/lrelease
    unix {
        !exists($$QMAKE_LRELEASE) { QMAKE_LRELEASE = lrelease-qt5 }
    } else {
        !exists($$QMAKE_LRELEASE) { QMAKE_LRELEASE = lrelease }
    }
}
