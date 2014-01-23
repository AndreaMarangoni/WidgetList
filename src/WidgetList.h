/*
 * WidgetList.h
 *
 *  Created on: Jan 23, 2014
 *      Author: andy
 */

#ifndef WIDGETLIST_H_
#define WIDGETLIST_H_

#include <qscrollarea.h>

class ListWidget;

class WidgetList: public QScrollArea {
public:
	WidgetList(ListWidget* listOfWidget, QWidget* parent = 0);
	virtual ~WidgetList();
private:
	ListWidget* list_;
};

#endif /* WIDGETLIST_H_ */
