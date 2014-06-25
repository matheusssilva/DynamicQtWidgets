#-------------------------------------------------
#
# Project created by QtCreator 2014-06-17T14:31:36
#
#-------------------------------------------------

QT       += widgets testlib
QT       -= gui

TARGET = dynamicqtwidgetstest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    main.cpp \
    dynamicqtwidgetstest.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    dynamicqtwidgetstest.hpp \

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../dynamicqtwidgets/release/ -ldynamicqtwidgets
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../dynamicqtwidgets/debug/ -ldynamicqtwidgets
else:unix:!macx: LIBS += -L$$OUT_PWD/../dynamicqtwidgets/ -ldynamicqtwidgets

INCLUDEPATH += $$PWD/../dynamicqtwidgets
DEPENDPATH += $$PWD/../dynamicqtwidgets

#copy ui files for build dir
copydata.commands = $(COPY_FILE) $$PWD/*.ui $$OUT_PWD
first.depends = $(first) copydata
export(first.depends)
export(copydata.commands)
QMAKE_EXTRA_TARGETS += first copydata

OTHER_FILES += \
    test_text.ui \
    test.ui \
    testempty.ui
