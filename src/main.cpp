
#include <QApplication>
#include <QPushButton>

#include "WidgetList.h"
#include "ListWidget.h"

#define RESTART_APPLICATION_RETURN 5

int main(int argc, char *argv[]) {
	int ret = -1;
	QApplication application(argc, argv);


    ListWidget* list = new ListWidget;

    for(int i=0;i<10;++i)
    {
        list->addWidget(new QPushButton(QString::number(i)));
    }

    WidgetList widgetList(list);
    widgetList.show();


    ret = application.exec();

    delete list;
    return ret;
}

