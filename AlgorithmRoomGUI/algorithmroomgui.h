#ifndef ALGORITHMROOMGUI_H
#define ALGORITHMROOMGUI_H

#include <QtWidgets/QMainWindow>
#include "ui_algorithmroomgui.h"

class AlgorithmRoomGUI : public QMainWindow
{
	Q_OBJECT

public:
	AlgorithmRoomGUI(QWidget *parent = 0);
	~AlgorithmRoomGUI();

private:
	Ui::AlgorithmRoomGUIClass ui;
	void initUi();

private slots:
    void onItemClicked(QTreeWidgetItem *item, int column);
	void onTextChanged(const QString &currentText);
	void onTextChanged2(const QString &currentText);
};

#endif // ALGORITHMROOMGUI_H
