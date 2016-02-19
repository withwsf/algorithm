TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    list.cpp \
    stack_linked_list.cpp \
    list_cursor.cpp \
    stack_array.cpp \
    queue.cpp

HEADERS += \
    list.h \
    stack_linked_list.h \
    list_cursor.h \
    stack_array.h \
    queue.h

