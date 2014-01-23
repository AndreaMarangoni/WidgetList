/*
 * FloatingWidgetList.cpp
 *
 *  Created on: Jan 23, 2014
 *      Author: andy
 */

#include "FloatingWidgetList.h"

FloatingWidgetList::FloatingWidgetList(QWidget *parent) :
	QWidget(parent),
	layout_(new QVBoxLayout(this)) {
	this->setLayout(layout_);
}

FloatingWidgetList::~FloatingWidgetList() {
}

void FloatingWidgetList::addWidget(QWidget* widget, int stretch,
	Qt::Alignment alignment) {
	layout_->QVBoxLayout::addWidget(widget, stretch, alignment);
}

void FloatingWidgetList::insertWidget(int index, QWidget* widget, int stretch,
	Qt::Alignment alignment) {
	layout_->QVBoxLayout::insertWidget(index, widget, stretch, alignment);
}

void FloatingWidgetList::removeWidget(QWidget* widget) {
	layout_->removeWidget(widget);
}

QList<QWidget*> FloatingWidgetList::getListWidget() const {
	QWidgetList list;
	for (int i = 0; i < layout_->count(); ++i) {
		list.push_back(layout_->itemAt(i)->widget());
	}
	return list;
}

QWidget* FloatingWidgetList::getWidget(int index) const {
	return layout_->itemAt(index)->widget();
}

int FloatingWidgetList::count() const {
	return layout_->count();
}
