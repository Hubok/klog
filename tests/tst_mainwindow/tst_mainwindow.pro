QT += testlib \
    core \
    gui \
    sql \
    network \
    serialport \
    printsupport \
    charts \
    widgets

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += ../../src/setupdialog.h \
    ../../src/aboutdialog.h \
    ../../src/awardswidget.h \     \
    ../../src/klogdefinitions.h \
    ../../src/widgets/showkloglogwidget.h \
    ../../src/elogqrzlog.h \
    ../../src/eqslutilities.h \
    ../../src/lotwutilities.h \
    ../../src/mainqsoentrywidget.h \
    ../../src/mainwindow.h \
    ../../src/inputwidgets/mainwindowinputqso.h \
    ../../src/inputwidgets/mainwindowinputcomment.h \
    ../../src/inputwidgets/mainwindowmydatatab.h \
    ../../src/inputwidgets/mainwindowinputothers.h \
    ../../src/inputwidgets/mainwindowinputeqsl.h \
    ../../src/inputwidgets/mainwindowinputqsl.h \
    ../../src/inputwidgets/mainwindowsattab.h\
    ../../src/qso.h \
    ../../src/searchmodel.h \
    ../../src/searchwindow.h \
    ../../src/setuppages/setuppageelog.h \
    ../../src/setuppages/setuppagesubdivisionnew.h \
    ../../src/setuppages/setuppagesubdivisions.h \
    ../../src/widgets/adiflotwexportwidget.h \
    ../../src/widgets/onlinemessagewidget.h \
    ../../src/widgets/showadifimportwidget.h \
    ../../src/world.h \
    ../../src/logwindow.h \
    ../../src/filemanager.h \
    ../../src/fileawardmanager.h \
    ../../src/database.h \
    ../../src/locator.h \
    ../../src/dxcluster.h \
    ../../src/awards.h \
    ../../src/startwizard.h \
    ../../src/downloadcty.h \
    ../../src/dataproxy_sqlite.h \
    ../../src/awarddxmarathon.h \
    ../../src/elogclublog.h \
    ../../src/softwareupdate.h \
    ../../src/softwareupdatedialog.h \
    ../../src/utilities.h \
    ../../src/dxccstatuswidget.h \
    ../../src/logmodel.h \
    ../../src/searchwidget.h \
    ../../src/infowidget.h \
    ../../src/showerrordialog.h \
    ../../src/udpserver.h \
    ../../src/statisticswidget.h \
    ../../src/charts/barchartstats.h \
    ../../src/updatesatsdata.h \
    ../../src/hamlibclass.h \
    ../../src/tipsdialog.h \
    ../../src/worldmapwidget.h \
    ../../src/setuppages/setuppagemisc.h \
    ../../src/setuppages/setuppageuserdata.h \
    ../../src/setuppages/setuppagedxcluster.h \
    ../../src/setuppages/setuppagecolors.h \
    ../../src/setuppages/setuppagelogs.h \
    ../../src/setuppages/setuppageworldeditor.h \
    ../../src/setuppages/setuppagesats.h \
    ../../src/setuppages/setuppagesatsnew.h \
    ../../src/setuppages/setuppagehamlib.h \
    ../../src/setuppages/setuppagelogsnew.h \
    ../../src/setuppages/setuppagebandmode.h \
    ../../src/setuppages/setupentitydialog.h \
    ../../src/setuppages/setuppageudp.h \
    ../../src/charts/statsgeneralchartwidget.h \
    ../../src/charts/statsdxccsonsatswidget.h \
    ../../src/charts/statsqsosperyearbarchartwidget.h \
    ../../src/charts/statsentitiesperyearbarchartwidget.h \
    ../../src/charts/statscqzperyearbarchartwidget.h \
    ../../src/charts/statsqsosperbandbarchartwidget.h \
    ../../src/charts/statsqsospermodebarchartwidget.h \
    ../../src/charts/statsqsosperdxccbarchartwidget.h \
    ../../src/charts/statsqsospercontinentbarchartwidget.h \
    ../../src/charts/statsqsosperhourbarchartwidget.h \
    ../../src/charts/statsqsospermonthbarchartwidget.h \
    ../../src/charts/statsworkedconfirmedpiechartwidget.h \
    ../../src/charts/statsworkedsentpiechartwidget.h \
    ../../src/charts/statsgridsonsatswidget.h \
    ../../src/charts/statssentconfirmedpiechartwidget.h

SOURCES +=  tst_mainwindow.cpp \
    ../../src/aboutdialog.cpp \
    ../../src/awardswidget.cpp \
    ../../src/elogqrzlog.cpp \
    ../../src/eqslutilities.cpp \
    ../../src/lotwutilities.cpp \
    ../../src/mainqsoentrywidget.cpp \
    ../../src/mainwindow.cpp \
    ../../src/inputwidgets/mainwindowinputqso.cpp \
    ../../src/inputwidgets/mainwindowinputcomment.cpp \
    ../../src/inputwidgets/mainwindowmydatatab.cpp \
    ../../src/inputwidgets/mainwindowinputothers.cpp \
    ../../src/inputwidgets/mainwindowinputeqsl.cpp \
    ../../src/inputwidgets/mainwindowinputqsl.cpp \
    ../../src/inputwidgets/mainwindowsattab.cpp\
    ../../src/qso.cpp \
    ../../src/searchmodel.cpp \
    ../../src/searchwindow.cpp \
    ../../src/setupdialog.cpp \
    ../../src/setuppages/setuppageelog.cpp \
    ../../src/setuppages/setuppagesubdivisionnew.cpp \
    ../../src/setuppages/setuppagesubdivisions.cpp \
    ../../src/widgets/adiflotwexportwidget.cpp \
    ../../src/widgets/onlinemessagewidget.cpp \
    ../../src/widgets/showadifimportwidget.cpp \
    ../../src/widgets/showkloglogwidget.cpp \
    ../../src/world.cpp \
    ../../src/logwindow.cpp \
    ../../src/filemanager.cpp \
    ../../src/fileawardmanager.cpp \
    ../../src/database.cpp \
    ../../src/dataproxy_sqlite.cpp \
    ../../src/downloadcty.cpp \
    ../../src/dxcluster.cpp \
    ../../src/locator.cpp \
    ../../src/awards.cpp \
    ../../src/setuppages/setuppagemisc.cpp \
    ../../src/setuppages/setuppageuserdata.cpp \
    ../../src/setuppages/setuppagedxcluster.cpp \
    ../../src/setuppages/setuppagecolors.cpp \
    ../../src/setuppages/setuppagelogs.cpp \
    ../../src/setuppages/setuppageworldeditor.cpp \
    ../../src/setuppages/setuppagelogsnew.cpp \
    ../../src/setuppages/setuppagebandmode.cpp \
    ../../src/setuppages/setuppageudp.cpp \
    ../../src/setuppages/setuppagesats.cpp \
    ../../src/setuppages/setuppagesatsnew.cpp \
    ../../src/setuppages/setuppagehamlib.cpp \
    ../../src/setuppages/setupentitydialog.cpp \
    ../../src/startwizard.cpp \
    ../../src/awarddxmarathon.cpp \
    ../../src/elogclublog.cpp \
    ../../src/softwareupdate.cpp \
    ../../src/softwareupdatedialog.cpp \
    ../../src/utilities.cpp \
    ../../src/dxccstatuswidget.cpp \
    ../../src/logmodel.cpp \
    ../../src/searchwidget.cpp \
    ../../src/infowidget.cpp \
    ../../src/showerrordialog.cpp \
    ../../src/udpserver.cpp \
    ../../src/statisticswidget.cpp \
    ../../src/charts/barchartstats.cpp \
    ../../src/updatesatsdata.cpp \
    ../../src/charts/statsgeneralchartwidget.cpp \
    ../../src/charts/statsdxccsonsatswidget.cpp \
    ../../src/charts/statsqsosperyearbarchartwidget.cpp \
    ../../src/charts/statsentitiesperyearbarchartwidget.cpp \
    ../../src/charts/statscqzperyearbarchartwidget.cpp \
    ../../src/charts/statsqsospermodebarchartwidget.cpp \
    ../../src/charts/statsqsosperdxccbarchartwidget.cpp \
    ../../src/charts/statsqsospercontinentbarchartwidget.cpp \
    ../../src/charts/statsqsosperhourbarchartwidget.cpp \
    ../../src/charts/statsqsospermonthbarchartwidget.cpp \
    ../../src/charts/statsworkedconfirmedpiechartwidget.cpp \
    ../../src/charts/statsworkedsentpiechartwidget.cpp \
    ../../src/charts/statssentconfirmedpiechartwidget.cpp \
    ../../src/charts/statsqsosperbandbarchartwidget.cpp \
    ../../src/charts/statsgridsonsatswidget.cpp \
    ../../src/hamlibclass.cpp \
    ../../src/tipsdialog.cpp \
    ../../src/worldmapwidget.cpp

isEmpty(QMAKE_LRELEASE) {
    win32|os2:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]\lrelease.exe
    else:QMAKE_LRELEASE = $$[QT_INSTALL_BINS]/lrelease
    unix {
        !exists($$QMAKE_LRELEASE) { QMAKE_LRELEASE = lrelease-qt5 }
    } else {
        !exists($$QMAKE_LRELEASE) { QMAKE_LRELEASE = lrelease }
    }
}

unix:!mac {
    LIBS += -lhamlib
}

macx: {
    INCLUDEPATH +=/usr/local/include/
    LIBS += -L"/usr/local/lib" -lhamlib
}
win32: {
    QMAKE_TARGET_COMPANY = EA4K
    QMAKE_TARGET_DESCRIPTION = Hamradio logging
    LIBS += -L"$$PWD/../../../libs/hamlib/lib/gcc" -lhamlib
    INCLUDEPATH += "$$PWD/../../../libs/hamlib/include/"
}
