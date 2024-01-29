QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    forgot_password.cpp \
    log_in.cpp \
    main.cpp \
    mainwindow.cpp \
    sign_up.cpp \
    todolist.cpp \
    users.cpp

HEADERS += \
    forgot_password.h \
    log_in.h \
    mainwindow.h \
    sign_up.h \
    todolist.h \
    users.h

FORMS += \
    forgot_password.ui \
    log_in.ui \
    mainwindow.ui \
    sign_up.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
