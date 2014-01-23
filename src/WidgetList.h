/*
 * WidgetList.h
 *
 *  Created on: Jan 23, 2014
 *      Author: andy
 */

#ifndef WIDGETLIST_H_
#define WIDGETLIST_H_

#include <qscrollarea.h>

class WidgetList: public QScrollArea {
public:
	WidgetList();
	virtual ~WidgetList();

	void addWidget(QWidget* widget, int stretch = 0, Qt::Alignment alignment = 0);
	void insertWidget(int index, QWidget* widget, int stretch = 0,
		Qt::Alignment alignment = 0);

	void removeWidget(QWidget* widget);

	QList<QWidget*> getListWidget() const;
	QWidget* getWidget(int index) const;
	int count() const;

private:
	QVBoxLayout* layout_;
};

#endif /* WIDGETLIST_H_ */
