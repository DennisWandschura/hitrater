#include "hitrater.h"
#include <QtWidgets/qapplication.h>
#if !_DEBUG && QT_STATIC
#include <QtPlugin>
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
#endif

#include "Task.h"

int main(int argc, char *argv[])
{
	auto t = __alignof(Task);

	QApplication a(argc, argv);

	Hitrater app;
	app.show();

	return a.exec();

	return 0;
}