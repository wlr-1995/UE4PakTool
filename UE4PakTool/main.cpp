#include "UE4PakTool.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UE4PakTool w;
	w.show();
	return a.exec();
}
