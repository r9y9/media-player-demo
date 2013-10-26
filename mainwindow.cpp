#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QDialog>
#include <QDebug>

#include <QFile>
#include <QFileInfo>

#include <QAudioFormat>
#include <QAudioOutput>

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player_= new QMediaPlayer;
    player_->setVolume(ui->volumeHorizontalSlider->value());

    connect(player_, SIGNAL(positionChanged(qint64)), this, SLOT(updateTimeElapsedSlider(qint64)));
    connect(player_, SIGNAL(durationChanged(qint64)), this, SLOT(setDuration(qint64)));

    connect(ui->actionClose, SIGNAL(triggered()), this, SLOT(close()));

    setWindowTitle("MediaPlayer");
}

MainWindow::~MainWindow()
{
    delete player_;
    delete ui;
}

void MainWindow::on_openPushButton_clicked()
{
    audioFilename_ = QFileDialog::getOpenFileName(this, tr("Open file"), "", tr(""));
    if (audioFilename_.isEmpty()) {
        return;
    }
    if (player_->isAudioAvailable()) {
        player_->stop();
    }

    ui->filePathLineEdit->setText(audioFilename_);
    player_->setMedia(QUrl::fromLocalFile(audioFilename_));
}

void MainWindow::on_listenPushButton_clicked()
{
    if (!player_->isAudioAvailable()) {
        return;
    }

    player_->play();
}

void MainWindow::on_stopPushButton_clicked()
{
    if (!player_->isAudioAvailable()) {
        return;
    }

    player_->stop();
}

void MainWindow::on_volumeHorizontalSlider_valueChanged(int value)
{
    if (!player_->isAudioAvailable()) {
        return;
    }

    player_->setVolume(value);
}

void MainWindow::on_pausePushButton_clicked()
{
    if (!player_->isAudioAvailable()) {
        return;
    }

    player_->pause();
}

void MainWindow::on_rewindPushButton_clicked()
{
    if (!player_->isAudioAvailable()) {
        return;
    }

    player_->setPosition(0);
    //ui->positionProgressBar->setValue(0);
    ui->positionHorizontalSlider->setValue(0);
    player_->play();
}

void MainWindow::on_positionHorizontalSlider_sliderMoved(int position)
{
    player_->setPosition(position);
}

void MainWindow::updateTimeElapsedSlider(qint64 percent)
{
    ui->positionHorizontalSlider->setValue(percent);
}

void MainWindow::setDuration(qint64 duration)
{
    ui->positionHorizontalSlider->setMaximum(duration);
}

