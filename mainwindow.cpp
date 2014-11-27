#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>


//******************************************
// Initialization
//******************************************
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_9->setText("1000");
    socket = new QTcpSocket(this);
    setWindowTitle("Robot Controller");
    ui->lineEdit->setText("10.0.10.228");
    ui->lineEdit_2->setText("12");

    ui->changeBaseSpeed->setRange(1000, 1800);
    int position = ui->changeBaseSpeed->sliderPosition();
    ui->lineEdit_6->setText(QString::number(position));

    ui->pitch_kp->setRange(0,4000);
    ui->gain_pitch_kp->setText(QString::number(ui->pitch_kp->sliderPosition()));
    ui->pitch_ki->setRange(0,4000);
    ui->gain_pitch_ki->setText(QString::number(ui->pitch_ki->sliderPosition()));
    ui->pitch_kd->setRange(0,4000);
    ui->gain_pitch_kd->setText(QString::number(ui->pitch_kd->sliderPosition()));
    ui->pitch_setpoint->setRange(-2500,2500);
    ui->editPitchSetpoint->setText(QString::number(ui->pitch_setpoint->sliderPosition()));
    ui->roll_kp->setRange(0,4000);
    ui->gain_roll_kp->setText(QString::number(ui->roll_kp->sliderPosition()));
    ui->roll_ki->setRange(0,4000);
    ui->gain_roll_ki->setText(QString::number(ui->roll_ki->sliderPosition()));
    ui->roll_kd->setRange(0,4000);
    ui->gain_roll_kd->setText(QString::number(ui->roll_kd->sliderPosition()));
    ui->roll_setpoint->setRange(-2500,2500);
    ui->editRollSetPoint->setText(QString::number(ui->roll_setpoint->sliderPosition()));
    ui->yaw_kp->setRange(0,4000);
    ui->gain_yaw_kp->setText(QString::number(ui->yaw_kp->sliderPosition()));
    ui->yaw_ki->setRange(0,4000);
    ui->gain_yaw_ki->setText(QString::number(ui->yaw_ki->sliderPosition()));
    ui->yaw_kd->setRange(0,4000);
    ui->gain_yaw_kd->setText(QString::number(ui->yaw_kd->sliderPosition()));
    ui->yaw_setpoint->setRange(-2500,2500);
    ui->editYawSetPoint->setText(QString::number(ui->yaw_setpoint->sliderPosition()));

    ui->gain_pitch_kp->setReadOnly(true);
    ui->gain_pitch_ki->setReadOnly(true);
    ui->gain_pitch_kd->setReadOnly(true);
    ui->gain_roll_kp->setReadOnly(true);
    ui->gain_roll_ki->setReadOnly(true);
    ui->gain_roll_kd->setReadOnly(true);
    ui->gain_yaw_kp->setReadOnly(true);
    ui->gain_yaw_ki->setReadOnly(true);
    ui->gain_yaw_kd->setReadOnly(true);
    ui->editPitchSetpoint->setReadOnly(true);
    ui->editRollSetPoint->setReadOnly(true);
    ui->editYawSetPoint->setReadOnly(true);

    ui->pitch_kp->setDisabled(true);
    ui->pitch_ki->setDisabled(true);
    ui->pitch_kd->setDisabled(true);
    ui->pitch_setpoint->setDisabled(true);

    ui->roll_kp->setDisabled(true);
    ui->roll_ki->setDisabled(true);
    ui->roll_kd->setDisabled(true);
    ui->roll_setpoint->setDisabled(true);

    ui->yaw_kp->setDisabled(true);
    ui->yaw_ki->setDisabled(true);
    ui->yaw_kd->setDisabled(true);
    ui->yaw_setpoint->setDisabled(true);

    ui->lineEdit_6->setReadOnly(true);
    //ui->pushButton->setDisabled(true);
    ui->pushButton_2->setDisabled(true);
    ui->pushButton_3->setDisabled(true);
    ui->changeBaseSpeed->setDisabled(true);
    ui->StartToSaveData->setDisabled(true);
    ui->StopToWrote->setDisabled(true);

    QFont font;
    font.setBold(true);
    ui->label_changeGainValues->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PushButton1_clicked()
{
    IP_Address = ui->lineEdit->text();
    Port = ui->lineEdit_2->text();
    port = Port.toInt();
    socket->connectToHost(IP_Address, port);
    QMessageBox msg;
    if(!socket->waitForConnected(2000)){
		msg.setWindowTitle("Error!");
        msg.setText("Connection failed!");
        //ui->pushButton->setDisabled(true);
        ui->changeBaseSpeed->setDisabled(true);
        ui->pushButton_2->setDisabled(true);
        ui->pushButton_3->setDisabled(true);
    } else{
		msg.setWindowTitle("Success");
        msg.setText("Connection successful.");
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
    }
    msg.exec();
    socket->close();

}

void MainWindow::on_changeBaseSpeed_sliderMoved(int position)
{
    QString speed = QString::number(position);
    ui->lineEdit_6->setText(speed);
    speed = "V" + speed;
    socket->connectToHost(IP_Address, port);
    socket->write(speed.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->pitch_kp->setEnabled(true);
    ui->pitch_ki->setEnabled(true);
    ui->pitch_kd->setEnabled(true);
    ui->pitch_setpoint->setEnabled(true);

    ui->roll_kp->setEnabled(true);
    ui->roll_ki->setEnabled(true);
    ui->roll_kd->setEnabled(true);
    ui->roll_setpoint->setEnabled(true);

    ui->yaw_kp->setEnabled(true);
    ui->yaw_ki->setEnabled(true);
    ui->yaw_kd->setEnabled(true);
    ui->yaw_setpoint->setEnabled(true);
    ui->StartToSaveData->setEnabled(true);
    ui->StopToWrote->setEnabled(true);

    ui->changeBaseSpeed->setEnabled(true);
    socket->connectToHost(IP_Address, port);
    socket->write("S");
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_pushButton_3_clicked()
{
	ui->lineEdit_6->setReadOnly(true);
    ui->pushButton_2->setDisabled(true);
    ui->pushButton_3->setDisabled(true);
    ui->changeBaseSpeed->setDisabled(true);
    
    ui->pitch_kp->setDisabled(true);
    ui->pitch_ki->setDisabled(true);
    ui->pitch_kd->setDisabled(true);
    ui->pitch_setpoint->setDisabled(true);

    ui->roll_kp->setDisabled(true);
    ui->roll_ki->setDisabled(true);
    ui->roll_kd->setDisabled(true);
    ui->roll_setpoint->setDisabled(true);

    ui->yaw_kp->setDisabled(true);
    ui->yaw_ki->setDisabled(true);
    ui->yaw_kd->setDisabled(true);
    ui->yaw_setpoint->setDisabled(true);
    ui->StartToSaveData->setDisabled(true);
    ui->StopToWrote->setDisabled(true);

    socket->connectToHost(IP_Address, port);
    socket->write("E");
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_pitch_kp_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString pitch_kp = QString::number(getPosition);
    ui->gain_pitch_kp->setText(pitch_kp);
    pitch_kp = "Xp" + pitch_kp;
    socket->connectToHost(IP_Address, port);
    socket->write(pitch_kp.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_pitch_ki_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString pitch_ki = QString::number(getPosition);
    ui->gain_pitch_ki->setText(pitch_ki);
    pitch_ki = "Xi" + pitch_ki;
    socket->connectToHost(IP_Address, port);
    socket->write(pitch_ki.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}


void MainWindow::on_pitch_kd_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString pitch_kd = QString::number(getPosition);
    ui->gain_pitch_kd->setText(pitch_kd);
    pitch_kd = "Xd" + pitch_kd;
    socket->connectToHost(IP_Address, port);
    socket->write(pitch_kd.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_pitch_setpoint_sliderMoved(int position)
{
    float getPosition = position/100.0;
    QString setpoint = QString::number(getPosition);
    ui->editPitchSetpoint->setText(setpoint);
    setpoint = "Xs" + setpoint;
    socket->connectToHost(IP_Address, port);
    socket->write(setpoint.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_roll_kp_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString roll_kp = QString::number(getPosition);
    ui->gain_roll_kp->setText(roll_kp);
    roll_kp = "Yp" + roll_kp;
    socket->connectToHost(IP_Address, port);
    socket->write(roll_kp.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_roll_ki_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString roll_ki = QString::number(getPosition);
    ui->gain_roll_ki->setText(roll_ki);
    roll_ki = "Yi" + roll_ki;
    socket->connectToHost(IP_Address, port);
    socket->write(roll_ki.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_roll_kd_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString roll_kd = QString::number(getPosition);
    ui->gain_roll_kd->setText(roll_kd);
    roll_kd = "Yd" + roll_kd;
    socket->connectToHost(IP_Address, port);
    socket->write(roll_kd.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_roll_setpoint_sliderMoved(int position)
{
    float getPosition = position/100.0;
    QString setpoint = QString::number(getPosition);
    ui->editRollSetPoint->setText(setpoint);
    setpoint = "Ys" + setpoint;
    socket->connectToHost(IP_Address, port);
    socket->write(setpoint.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_yaw_kp_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString yaw_kp = QString::number(getPosition);
    ui->gain_yaw_kp->setText(yaw_kp);
    yaw_kp = "Zp" + yaw_kp;
    socket->connectToHost(IP_Address, port);
    socket->write(yaw_kp.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_yaw_ki_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString yaw_ki = QString::number(getPosition);
    ui->gain_yaw_ki->setText(yaw_ki);
    yaw_ki = "Zi" + yaw_ki;
    socket->connectToHost(IP_Address, port);
    socket->write(yaw_ki.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_yaw_kd_sliderMoved(int position)
{
    float getPosition = position/1000.0;
    QString yaw_kd = QString::number(getPosition);
    ui->gain_yaw_kd->setText(yaw_kd);
    yaw_kd = "Zd" + yaw_kd;
    socket->connectToHost(IP_Address, port);
    socket->write(yaw_kd.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_yaw_setpoint_sliderMoved(int position)
{
    float getPosition = position/100.0;
    QString setpoint = QString::number(getPosition);
    ui->editYawSetPoint->setText(setpoint);
    setpoint = "Zs" + setpoint;
    socket->connectToHost(IP_Address, port);
    socket->write(setpoint.toUtf8());
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_StartToSaveData_clicked()
{
    // a -> Write command
    socket->connectToHost(IP_Address, port);
    socket->write("a");
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}

void MainWindow::on_StopToWrote_clicked()
{
     // a -> Stop command
    socket->connectToHost(IP_Address, port);
    socket->write("b");
    socket->waitForBytesWritten(100);
    socket->flush();
    socket->close();
}
