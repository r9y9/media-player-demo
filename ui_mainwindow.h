/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QWidget *centralWidget;
    QLineEdit *filePathLineEdit;
    QPushButton *openPushButton;
    QPushButton *listenPushButton;
    QPushButton *stopPushButton;
    QSlider *volumeHorizontalSlider;
    QLabel *label;
    QPushButton *pausePushButton;
    QPushButton *rewindPushButton;
    QProgressBar *positionProgressBar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(488, 162);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        filePathLineEdit = new QLineEdit(centralWidget);
        filePathLineEdit->setObjectName(QStringLiteral("filePathLineEdit"));
        filePathLineEdit->setGeometry(QRect(20, 10, 401, 20));
        openPushButton = new QPushButton(centralWidget);
        openPushButton->setObjectName(QStringLiteral("openPushButton"));
        openPushButton->setGeometry(QRect(440, 5, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/button/music"), QSize(), QIcon::Normal, QIcon::Off);
        openPushButton->setIcon(icon);
        listenPushButton = new QPushButton(centralWidget);
        listenPushButton->setObjectName(QStringLiteral("listenPushButton"));
        listenPushButton->setGeometry(QRect(20, 40, 41, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/button/start"), QSize(), QIcon::Normal, QIcon::Off);
        listenPushButton->setIcon(icon1);
        stopPushButton = new QPushButton(centralWidget);
        stopPushButton->setObjectName(QStringLiteral("stopPushButton"));
        stopPushButton->setGeometry(QRect(120, 40, 41, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/button/Resources/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopPushButton->setIcon(icon2);
        volumeHorizontalSlider = new QSlider(centralWidget);
        volumeHorizontalSlider->setObjectName(QStringLiteral("volumeHorizontalSlider"));
        volumeHorizontalSlider->setGeometry(QRect(370, 60, 101, 20));
        volumeHorizontalSlider->setMaximum(100);
        volumeHorizontalSlider->setValue(90);
        volumeHorizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 40, 50, 12));
        pausePushButton = new QPushButton(centralWidget);
        pausePushButton->setObjectName(QStringLiteral("pausePushButton"));
        pausePushButton->setGeometry(QRect(70, 40, 41, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/button/Resources/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pausePushButton->setIcon(icon3);
        rewindPushButton = new QPushButton(centralWidget);
        rewindPushButton->setObjectName(QStringLiteral("rewindPushButton"));
        rewindPushButton->setGeometry(QRect(170, 40, 41, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/button/Resources/rewind.png"), QSize(), QIcon::Normal, QIcon::Off);
        rewindPushButton->setIcon(icon4);
        positionProgressBar = new QProgressBar(centralWidget);
        positionProgressBar->setObjectName(QStringLiteral("positionProgressBar"));
        positionProgressBar->setGeometry(QRect(20, 100, 451, 23));
        positionProgressBar->setValue(0);
        positionProgressBar->setTextVisible(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 488, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        openPushButton->setText(QString());
        listenPushButton->setText(QString());
        stopPushButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Volume", 0));
        pausePushButton->setText(QString());
        rewindPushButton->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
