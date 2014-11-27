#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QTcpSocket>
#include <QMessageBox>

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
    void on_PushButton1_clicked();
    //void on_pushButton_clicked();

    void on_changeBaseSpeed_sliderMoved(int position);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pitch_kp_sliderMoved(int position);

    void on_pitch_ki_sliderMoved(int position);


    void on_pitch_kd_sliderMoved(int position);

    void on_pitch_setpoint_sliderMoved(int position);

    void on_roll_kp_sliderMoved(int position);

    void on_roll_ki_sliderMoved(int position);

    void on_roll_kd_sliderMoved(int position);

    void on_roll_setpoint_sliderMoved(int position);

    void on_yaw_kp_sliderMoved(int position);

    void on_yaw_ki_sliderMoved(int position);

    void on_yaw_kd_sliderMoved(int position);

    void on_yaw_setpoint_sliderMoved(int position);

    void on_StartToSaveData_clicked();

    void on_StopToWrote_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QString IP_Address;
    QString Port;
    int port;
};

#endif // MAINWINDOW_H
