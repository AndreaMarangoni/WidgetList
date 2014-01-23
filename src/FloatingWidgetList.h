/*
 * FloatingWidgetList.h
 *
 *  Created on: Jan 23, 2014
 *      Author: andy
 */

#ifndef FLOATINGWIDGETLIST_H_
#define FLOATINGWIDGETLIST_H_

#include <QWidget>

class QVBoxLayout;

class FloatingWidgetList: public QWidget {
Q_OBJECT

public:
	FloatingWidgetList(QWidget *parent = 0);
	virtual ~FloatingWidgetList();

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

#endif /* FLOATINGWIDGETLIST_H_ */
