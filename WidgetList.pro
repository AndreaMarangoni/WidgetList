TEMPLATE = app
TARGET = WidgetList
DEPENDPATH += . src
INCLUDEPATH += ../

QT += core \
    gui

# Input
SOURCES += src/main.cpp \
		   src/ScrollArea.cpp \
		   src/FloatingWidgetList.cpp
		   
HEADERS += src/ScrollArea.h \
		   src/FloatingWidgetList.h
FORMS = 
RESOURCES = 
TRANSLATIONS = 
DEFINES += DEBUG
