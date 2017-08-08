#include "algorithmroomgui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AlgorithmRoomGUI w;
	w.show();
	return a.exec();
}
