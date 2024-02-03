QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_orgenization.cpp \
    add_team.cpp \
    addmember.cpp \
    delete_team.cpp \
    deletemember.cpp \
    deleteorganazation.cpp \
    edit_member.cpp \
    edit_team.cpp \
    editorganization.cpp \
    forgot_password.cpp \
    log_in.cpp \
    main.cpp \
    main_show.cpp \
    mainwindow.cpp \
    menu.cpp \
    org_methods.cpp \
    organization_managment.cpp \
    organizationss.cpp \
    showmenue.cpp \
    sign_up.cpp \
    team.cpp \
    team_managment.cpp \
    users.cpp

HEADERS += \
    add_orgenization.h \
    add_team.h \
    addmember.h \
    delete_team.h \
    deletemember.h \
    deleteorganazation.h \
    edit_member.h \
    edit_team.h \
    editorganization.h \
    forgot_password.h \
    log_in.h \
    main_show.h \
    mainwindow.h \
    menu.h \
    org_methods.h \
    organization_managment.h \
    organizationss.h \
    showmenue.h \
    sign_up.h \
    task.h \
    team.h \
    team_managment.h \
    users.h

FORMS += \
    add_orgenization.ui \
    add_team.ui \
    addmember.ui \
    delete_team.ui \
    deletemember.ui \
    deleteorganazation.ui \
    edit_member.ui \
    edit_team.ui \
    editorganization.ui \
    forgot_password.ui \
    log_in.ui \
    main_show.ui \
    mainwindow.ui \
    menu.ui \
    organization_managment.ui \
    showmenue.ui \
    sign_up.ui \
    team_managment.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
