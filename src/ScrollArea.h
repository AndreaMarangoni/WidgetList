/*
 * ScrollArea.h
 *
 *  Created on: Jan 22, 2014
 *      Author: andy
 */

#ifndef SCROLLAREA_H_
#define SCROLLAREA_H_

#include <qscrollarea.h>

class ScrollArea: public QScrollArea {
	Q_OBJECT

public:
	ScrollArea();
	virtual ~ScrollArea();
};

#endif /* SCROLLAREA_H_ */
