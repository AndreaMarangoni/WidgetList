
#include "WidgetList.h"
#include "ListWidget.h"

WidgetList::WidgetList(ListWidget* listOfWidget, QWidget* parent) :
	QScrollArea(parent),
	list_(listOfWidget) {
	this->setWidget(list_);
	this->setWidgetResizable(true);
}

WidgetList::~WidgetList()
{
}

