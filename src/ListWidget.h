/*
 * ListWidget.h
 *
 *  Created on: Jan 23, 2014
 *      Author: andy
 */

#ifndef LISTWIDGET_H_
#define LISTWIDGET_H_

#include <QWidget>

class QVBoxLayout;

class ListWidget: public QWidget {
Q_OBJECT

public:
	ListWidget(QWidget *parent = 0);
	virtual ~ListWidget();

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

#endif /* LISTWIDGET_H_ */
