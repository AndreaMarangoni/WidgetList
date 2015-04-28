TEMPLATE = app
TARGET = WidgetList
DEPENDPATH += . src
INCLUDEPATH += ../

QT += core gui widgets

# Input
SOURCES += \
src/main.cpp \
src/WidgetList.cpp \
src/ListWidget.cpp
		   
HEADERS += \
src/WidgetList.h \
src/ListWidget.h

FORMS = 
RESOURCES = 
TRANSLATIONS = 
