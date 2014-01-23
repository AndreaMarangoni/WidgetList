/*
 * ListWidget.cpp
 *
 *  Created on: Jan 23, 2014
 *      Author: andy
 */

#include "ListWidget.h"

#include <QVBoxLayout>

ListWidget::ListWidget(QWidget *parent) :
	QWidget(parent),
	layout_(new QVBoxLayout(this)) {
	this->setLayout(layout_);
}

ListWidget::~ListWidget() {
}

void ListWidget::addWidget(QWidget* widget, int stretch,
	Qt::Alignment alignment) {
	layout_->QVBoxLayout::addWidget(widget, stretch, alignment);
}

void ListWidget::insertWidget(int index, QWidget* widget, int stretch,
	Qt::Alignment alignment) {
	layout_->QVBoxLayout::insertWidget(index, widget, stretch, alignment);
}

void ListWidget::removeWidget(QWidget* widget) {
	layout_->removeWidget(widget);
}

QList<QWidget*> ListWidget::getListWidget() const {
	QWidgetList list;
	for (int i = 0; i < layout_->count(); ++i) {
		list.push_back(layout_->itemAt(i)->widget());
	}
	return list;
}

QWidget* ListWidget::getWidget(int index) const {
	return layout_->itemAt(index)->widget();
}

int ListWidget::count() const {
	return layout_->count();
}
