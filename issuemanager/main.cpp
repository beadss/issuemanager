#include "stdafx.h"
#include "issuemanager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	issuemanager w;
	w.show();
	return a.exec();
}
