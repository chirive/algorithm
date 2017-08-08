/********************************************************************************
** Form generated from reading UI file 'algorithmroomgui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGORITHMROOMGUI_H
#define UI_ALGORITHMROOMGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlgorithmRoomGUIClass
{
public:
    QWidget *centralWidget;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QListWidget *listWidget;
    QGraphicsView *graphicsView;
    QWidget *page_2;
    QListWidget *listWidget_2;
    QGraphicsView *graphicsView_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AlgorithmRoomGUIClass)
    {
        if (AlgorithmRoomGUIClass->objectName().isEmpty())
            AlgorithmRoomGUIClass->setObjectName(QStringLiteral("AlgorithmRoomGUIClass"));
        AlgorithmRoomGUIClass->resize(1033, 668);
        centralWidget = new QWidget(AlgorithmRoomGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 131, 621));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(130, 0, 901, 621));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        listWidget = new QListWidget(page);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 141, 621));
        graphicsView = new QGraphicsView(page);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(140, 0, 761, 621));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        listWidget_2 = new QListWidget(page_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 141, 621));
        graphicsView_2 = new QGraphicsView(page_2);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(140, 0, 761, 621));
        stackedWidget->addWidget(page_2);
        AlgorithmRoomGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AlgorithmRoomGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1033, 23));
        AlgorithmRoomGUIClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(AlgorithmRoomGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AlgorithmRoomGUIClass->setStatusBar(statusBar);

        retranslateUi(AlgorithmRoomGUIClass);

        QMetaObject::connectSlotsByName(AlgorithmRoomGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *AlgorithmRoomGUIClass)
    {
        AlgorithmRoomGUIClass->setWindowTitle(QApplication::translate("AlgorithmRoomGUIClass", "AlgorithmRoomGUI", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("AlgorithmRoomGUIClass", "\347\261\273\345\236\213", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("AlgorithmRoomGUIClass", "SORT", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("AlgorithmRoomGUIClass", "SEARCH", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class AlgorithmRoomGUIClass: public Ui_AlgorithmRoomGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGORITHMROOMGUI_H
