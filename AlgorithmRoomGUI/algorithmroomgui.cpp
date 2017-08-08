#include "algorithmroomgui.h"

AlgorithmRoomGUI::AlgorithmRoomGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initUi();
}

AlgorithmRoomGUI::~AlgorithmRoomGUI()
{

}

void AlgorithmRoomGUI::initUi()
{
	ui.listWidget->addItem("BABEL");
	ui.listWidget->addItem("SHELL");
	ui.listWidget->addItem("QUICK");
	ui.listWidget->addItem("MERGE");
	ui.listWidget->addItem("HASH");
	ui.listWidget->addItem("HEAP");
	ui.listWidget->addItem("BUCKET");

	connect(ui.treeWidget, SIGNAL(itemClicked(QTreeWidgetItem *, int)), this, SLOT(onItemClicked(QTreeWidgetItem *, int)));

	connect(ui.listWidget, SIGNAL(currentTextChanged(const QString &)), this, SLOT(onTextChanged(const QString &)));
	connect(ui.listWidget_2, SIGNAL(currentTextChanged(const QString &)), this, SLOT(onTextChanged2(const QString &)));

	ui.stackedWidget->setCurrentIndex(0);
}

void AlgorithmRoomGUI::onItemClicked(QTreeWidgetItem *item, int column)
{
	if (item->text(column) == "SORT")
	{
		ui.stackedWidget->setCurrentIndex(0);
	}
	if (item->text(column) == "SEARCH")
	{
		ui.stackedWidget->setCurrentIndex(1);
	}
}

void AlgorithmRoomGUI::onTextChanged(const QString &currentText)
{

}

void AlgorithmRoomGUI::onTextChanged2(const QString &currentText)
{

}
