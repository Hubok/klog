QT += testlib \
    gui \
    widgets

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

HEADERS += \
    ../../src/utilities.h \
    ../../src/klogdefinitions.h \
    ../../src/locator.h \
    ../../src/adifforfield.h

SOURCES +=  tst_adifforfield.cpp \
    ../../src/locator.cpp \
    ../../src/utilities.cpp \
    ../../src/adifforfield.cpp


isEmpty(QMAKE_LRELEASE) {
    win32|os2:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]\lrelease.exe
    else:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]/lrelease
    unix {
        !exists($$QMAKE_LRELEASE) { QMAKE_LRELEASE = lrelease-qt5 }
    } else {
        !exists($$QMAKE_LRELEASE) { QMAKE_LRELEASE = lrelease }
    }
}
