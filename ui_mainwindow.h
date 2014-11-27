/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Nov 13 12:28:49 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *PushButton1;
    QSlider *changeBaseSpeed;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_10;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line;
    QFrame *line_10;
    QFrame *line_11;
    QLabel *label_pitch;
    QLabel *label_changeGainValues;
    QLabel *label_roll;
    QLabel *label_yaw;
    QFrame *line_12;
    QFrame *line_13;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QFrame *line_15;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QSlider *pitch_kp;
    QSlider *pitch_ki;
    QSlider *pitch_kd;
    QSlider *pitch_setpoint;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_3;
    QSlider *roll_kp;
    QSlider *roll_ki;
    QSlider *roll_kd;
    QSlider *roll_setpoint;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *gain_yaw_kp;
    QFrame *line_14;
    QLineEdit *gain_yaw_ki;
    QLineEdit *gain_yaw_kd;
    QLineEdit *editYawSetPoint;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout;
    QSlider *yaw_kp;
    QSlider *yaw_ki;
    QSlider *yaw_kd;
    QSlider *yaw_setpoint;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *gain_roll_kp;
    QLineEdit *gain_roll_ki;
    QLineEdit *gain_roll_kd;
    QLineEdit *editRollSetPoint;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *gain_pitch_kp;
    QLineEdit *gain_pitch_ki;
    QLineEdit *gain_pitch_kd;
    QLineEdit *editPitchSetpoint;
    QLabel *label_3;
    QPushButton *StartToSaveData;
    QPushButton *StopToWrote;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1073, 572);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(101, 1, 121, 27));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 38, 71, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 5, 71, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(24, 40, 66, 17));
        PushButton1 = new QPushButton(centralWidget);
        PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
        PushButton1->setGeometry(QRect(100, 70, 81, 27));
        changeBaseSpeed = new QSlider(centralWidget);
        changeBaseSpeed->setObjectName(QString::fromUtf8("changeBaseSpeed"));
        changeBaseSpeed->setGeometry(QRect(869, 31, 29, 281));
        changeBaseSpeed->setOrientation(Qt::Vertical);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(859, 10, 66, 10));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(829, 30, 41, 17));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(829, 294, 41, 17));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(746, 224, 71, 27));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(745, 203, 81, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 50, 71, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(949, 286, 61, 27));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 99, 241, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(230, -46, 20, 151));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(240, 30, 101, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(240, 80, 101, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(330, 39, 20, 51));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(720, 192, 121, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(830, 200, 20, 61));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(610, -20, 20, 341));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(915, 0, 20, 321));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(925, 280, 118, 3));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        label_pitch = new QLabel(centralWidget);
        label_pitch->setObjectName(QString::fromUtf8("label_pitch"));
        label_pitch->setGeometry(QRect(208, 154, 66, 17));
        label_changeGainValues = new QLabel(centralWidget);
        label_changeGainValues->setObjectName(QString::fromUtf8("label_changeGainValues"));
        label_changeGainValues->setGeometry(QRect(170, 122, 161, 17));
        label_roll = new QLabel(centralWidget);
        label_roll->setObjectName(QString::fromUtf8("label_roll"));
        label_roll->setGeometry(QRect(208, 329, 66, 17));
        label_yaw = new QLabel(centralWidget);
        label_yaw->setObjectName(QString::fromUtf8("label_yaw"));
        label_yaw->setGeometry(QRect(753, 328, 66, 17));
        line_12 = new QFrame(centralWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(710, 200, 20, 61));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralWidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(720, 250, 121, 20));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(59, 347, 20, 101));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_5->addWidget(label_14);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_5->addWidget(label_15);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_5->addWidget(label_16);

        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(589, 352, 20, 101));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_6->addWidget(label_17);

        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_6->addWidget(label_18);

        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_6->addWidget(label_19);

        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(14, 290, 66, 17));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(13, 460, 66, 17));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(543, 466, 66, 17));
        line_15 = new QFrame(centralWidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(620, 312, 431, 20));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(58, 178, 20, 101));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(80, 178, 381, 138));
        verticalLayout_10 = new QVBoxLayout(layoutWidget2);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pitch_kp = new QSlider(layoutWidget2);
        pitch_kp->setObjectName(QString::fromUtf8("pitch_kp"));
        pitch_kp->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(pitch_kp);

        pitch_ki = new QSlider(layoutWidget2);
        pitch_ki->setObjectName(QString::fromUtf8("pitch_ki"));
        pitch_ki->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(pitch_ki);

        pitch_kd = new QSlider(layoutWidget2);
        pitch_kd->setObjectName(QString::fromUtf8("pitch_kd"));
        pitch_kd->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(pitch_kd);


        verticalLayout_10->addLayout(verticalLayout_2);

        pitch_setpoint = new QSlider(layoutWidget2);
        pitch_setpoint->setObjectName(QString::fromUtf8("pitch_setpoint"));
        pitch_setpoint->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(pitch_setpoint);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(80, 347, 381, 138));
        verticalLayout_11 = new QVBoxLayout(layoutWidget3);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        roll_kp = new QSlider(layoutWidget3);
        roll_kp->setObjectName(QString::fromUtf8("roll_kp"));
        roll_kp->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(roll_kp);

        roll_ki = new QSlider(layoutWidget3);
        roll_ki->setObjectName(QString::fromUtf8("roll_ki"));
        roll_ki->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(roll_ki);

        roll_kd = new QSlider(layoutWidget3);
        roll_kd->setObjectName(QString::fromUtf8("roll_kd"));
        roll_kd->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(roll_kd);


        verticalLayout_11->addLayout(verticalLayout_3);

        roll_setpoint = new QSlider(layoutWidget3);
        roll_setpoint->setObjectName(QString::fromUtf8("roll_setpoint"));
        roll_setpoint->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(roll_setpoint);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(985, 351, 62, 141));
        verticalLayout_12 = new QVBoxLayout(layoutWidget4);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gain_yaw_kp = new QLineEdit(layoutWidget4);
        gain_yaw_kp->setObjectName(QString::fromUtf8("gain_yaw_kp"));

        verticalLayout_9->addWidget(gain_yaw_kp);

        line_14 = new QFrame(layoutWidget4);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_14);

        gain_yaw_ki = new QLineEdit(layoutWidget4);
        gain_yaw_ki->setObjectName(QString::fromUtf8("gain_yaw_ki"));

        verticalLayout_9->addWidget(gain_yaw_ki);

        gain_yaw_kd = new QLineEdit(layoutWidget4);
        gain_yaw_kd->setObjectName(QString::fromUtf8("gain_yaw_kd"));

        verticalLayout_9->addWidget(gain_yaw_kd);


        verticalLayout_12->addLayout(verticalLayout_9);

        editYawSetPoint = new QLineEdit(layoutWidget4);
        editYawSetPoint->setObjectName(QString::fromUtf8("editYawSetPoint"));

        verticalLayout_12->addWidget(editYawSetPoint);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(610, 351, 371, 138));
        verticalLayout_13 = new QVBoxLayout(layoutWidget5);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        yaw_kp = new QSlider(layoutWidget5);
        yaw_kp->setObjectName(QString::fromUtf8("yaw_kp"));
        yaw_kp->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(yaw_kp);

        yaw_ki = new QSlider(layoutWidget5);
        yaw_ki->setObjectName(QString::fromUtf8("yaw_ki"));
        yaw_ki->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(yaw_ki);

        yaw_kd = new QSlider(layoutWidget5);
        yaw_kd->setObjectName(QString::fromUtf8("yaw_kd"));
        yaw_kd->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(yaw_kd);


        verticalLayout_13->addLayout(verticalLayout);

        yaw_setpoint = new QSlider(layoutWidget5);
        yaw_setpoint->setObjectName(QString::fromUtf8("yaw_setpoint"));
        yaw_setpoint->setOrientation(Qt::Horizontal);

        verticalLayout_13->addWidget(yaw_setpoint);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(470, 347, 62, 141));
        verticalLayout_14 = new QVBoxLayout(layoutWidget6);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gain_roll_kp = new QLineEdit(layoutWidget6);
        gain_roll_kp->setObjectName(QString::fromUtf8("gain_roll_kp"));

        verticalLayout_8->addWidget(gain_roll_kp);

        gain_roll_ki = new QLineEdit(layoutWidget6);
        gain_roll_ki->setObjectName(QString::fromUtf8("gain_roll_ki"));

        verticalLayout_8->addWidget(gain_roll_ki);

        gain_roll_kd = new QLineEdit(layoutWidget6);
        gain_roll_kd->setObjectName(QString::fromUtf8("gain_roll_kd"));

        verticalLayout_8->addWidget(gain_roll_kd);


        verticalLayout_14->addLayout(verticalLayout_8);

        editRollSetPoint = new QLineEdit(layoutWidget6);
        editRollSetPoint->setObjectName(QString::fromUtf8("editRollSetPoint"));

        verticalLayout_14->addWidget(editRollSetPoint);

        layoutWidget7 = new QWidget(centralWidget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(468, 179, 62, 130));
        verticalLayout_15 = new QVBoxLayout(layoutWidget7);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gain_pitch_kp = new QLineEdit(layoutWidget7);
        gain_pitch_kp->setObjectName(QString::fromUtf8("gain_pitch_kp"));

        verticalLayout_7->addWidget(gain_pitch_kp);

        gain_pitch_ki = new QLineEdit(layoutWidget7);
        gain_pitch_ki->setObjectName(QString::fromUtf8("gain_pitch_ki"));

        verticalLayout_7->addWidget(gain_pitch_ki);

        gain_pitch_kd = new QLineEdit(layoutWidget7);
        gain_pitch_kd->setObjectName(QString::fromUtf8("gain_pitch_kd"));

        verticalLayout_7->addWidget(gain_pitch_kd);


        verticalLayout_15->addLayout(verticalLayout_7);

        editPitchSetpoint = new QLineEdit(layoutWidget7);
        editPitchSetpoint->setObjectName(QString::fromUtf8("editPitchSetpoint"));

        verticalLayout_15->addWidget(editPitchSetpoint);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 0, 101, 17));
        StartToSaveData = new QPushButton(centralWidget);
        StartToSaveData->setObjectName(QString::fromUtf8("StartToSaveData"));
        StartToSaveData->setGeometry(QRect(460, 30, 71, 27));
        StopToWrote = new QPushButton(centralWidget);
        StopToWrote->setObjectName(QString::fromUtf8("StopToWrote"));
        StopToWrote->setGeometry(QRect(460, 70, 71, 27));
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        pushButton_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label->raise();
        label_2->raise();
        PushButton1->raise();
        changeBaseSpeed->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        lineEdit_6->raise();
        label_10->raise();
        pushButton_2->raise();
        line_2->raise();
        line_3->raise();
        line_5->raise();
        line_6->raise();
        line_7->raise();
        line_8->raise();
        line_9->raise();
        line->raise();
        line_10->raise();
        line_11->raise();
        label_pitch->raise();
        label_changeGainValues->raise();
        label_roll->raise();
        label_yaw->raise();
        line_12->raise();
        line_13->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        line_15->raise();
        label_3->raise();
        StartToSaveData->raise();
        StopToWrote->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1073, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "IP Address", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Port No.", 0, QApplication::UnicodeUTF8));
        PushButton1->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Speed", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "1800", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "1200", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Base speed", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "START", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "STOP", 0, QApplication::UnicodeUTF8));
        label_pitch->setText(QApplication::translate("MainWindow", "PITCH ", 0, QApplication::UnicodeUTF8));
        label_changeGainValues->setText(QApplication::translate("MainWindow", "Change gain values", 0, QApplication::UnicodeUTF8));
        label_roll->setText(QApplication::translate("MainWindow", "ROLL", 0, QApplication::UnicodeUTF8));
        label_yaw->setText(QApplication::translate("MainWindow", "YAW", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Kp", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Ki", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Kd", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Kp", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Ki", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Kd", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Set point", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Set point", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Set point", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Kp", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Ki", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Kd", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Save data ?", 0, QApplication::UnicodeUTF8));
        StartToSaveData->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        StopToWrote->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
