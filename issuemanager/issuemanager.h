#ifndef ISSUEMANAGER_H
#define ISSUEMANAGER_H

#include <QtWidgets/QMainWindow>
#include "ui_issuemanager.h"

class issuemanager : public QMainWindow
{
	Q_OBJECT

public:
	issuemanager(QWidget *parent = 0);
	~issuemanager();

private:
	Ui::issuemanagerClass ui;
};

#endif // ISSUEMANAGER_H
