#pragma once

#include <QtWidgets\qmainwindow.h>
#include "ui_hitrater.h"
#include "Application.h"
#include "datafile.h"

class Hitrater : public QMainWindow
{
	Q_OBJECT

public:
	Hitrater(QWidget *parent = nullptr);
	~Hitrater();

private slots:
	void on_pushButton_clicked();
	void on_pushButtonMT_clicked();
	void on_pushButton_FileOut_clicked();

private:
	Ui::hitraterClass ui;
	Application m_app;
	CDataFile m_datafile;

	InputSettingsUI readInput();

	void getData();
};
