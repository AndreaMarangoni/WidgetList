/*
 * main.cpp
 *
 *  Created on: Jan 22, 2014
 *      Author: andy
 */

#include <QApplication>

#define RESTART_APPLICATION_RETURN 5

int main(int argc, char *argv[]) {
	int ret = -1;
	QApplication application(argc, argv);
	for (;;) {
		ret = application.exec();
		if (ret != RESTART_APPLICATION_RETURN) {
			break;
		}
	}
	return ret;
}

