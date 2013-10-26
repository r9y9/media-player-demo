#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_openPushButton_clicked();
    void on_listenPushButton_clicked();
    void on_stopPushButton_clicked();
    void on_volumeHorizontalSlider_valueChanged(int value);
    void on_pausePushButton_clicked();
    void on_rewindPushButton_clicked();
    void on_positionHorizontalSlider_sliderMoved(int position);

    void updateTimeElapsedSlider(qint64 percent);
    void setDuration(qint64 duration);

private:
    Ui::MainWindow *ui;

    QMediaPlayer *player_;
    QString audioFilename_;
};

#endif // MAINWINDOW_H
