/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *bt_step_5;
    QPushButton *bt_step_11;
    QLCDNumber *lcd_step;
    QPushButton *bt_flash_fast;
    QPushButton *bt_step_3;
    QPushButton *bt_flash_med;
    QPushButton *bt_step_0;
    QPushButton *bt_rainbow_med;
    QPushButton *bt_off;
    QPushButton *bt_step_4;
    QPushButton *bt_rainbow_slow;
    QPushButton *bt_step_up;
    QLabel *label_2;
    QPushButton *bt_step_9;
    QPushButton *bt_step_1;
    QLabel *label;
    QPushButton *bt_flash_strobe;
    QPushButton *bt_fade_med;
    QPushButton *bt_step_6;
    QPushButton *bt_step_8;
    QPushButton *bt_step_2;
    QLabel *label_3;
    QPushButton *bt_step_12;
    QPushButton *bt_step_14;
    QPushButton *bt_step_15;
    QPushButton *bt_step_10;
    QLabel *label_4;
    QPushButton *bt_step_13;
    QPushButton *bt_step_16;
    QPushButton *bt_step_7;
    QPushButton *bt_setp_down;
    QPushButton *bt_fade_slow;
    QPushButton *bt_b;
    QPushButton *bt_g;
    QPushButton *bt_r;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 839);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 1041, 787));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bt_step_5 = new QPushButton(gridLayoutWidget);
        bt_step_5->setObjectName(QString::fromUtf8("bt_step_5"));
        QFont font;
        font.setPointSize(14);
        bt_step_5->setFont(font);

        gridLayout->addWidget(bt_step_5, 6, 2, 1, 1);

        bt_step_11 = new QPushButton(gridLayoutWidget);
        bt_step_11->setObjectName(QString::fromUtf8("bt_step_11"));
        bt_step_11->setFont(font);

        gridLayout->addWidget(bt_step_11, 12, 2, 1, 1);

        lcd_step = new QLCDNumber(gridLayoutWidget);
        lcd_step->setObjectName(QString::fromUtf8("lcd_step"));

        gridLayout->addWidget(lcd_step, 14, 0, 1, 1);

        bt_flash_fast = new QPushButton(gridLayoutWidget);
        bt_flash_fast->setObjectName(QString::fromUtf8("bt_flash_fast"));
        bt_flash_fast->setFont(font);

        gridLayout->addWidget(bt_flash_fast, 5, 0, 1, 1);

        bt_step_3 = new QPushButton(gridLayoutWidget);
        bt_step_3->setObjectName(QString::fromUtf8("bt_step_3"));
        bt_step_3->setFont(font);

        gridLayout->addWidget(bt_step_3, 4, 2, 1, 1);

        bt_flash_med = new QPushButton(gridLayoutWidget);
        bt_flash_med->setObjectName(QString::fromUtf8("bt_flash_med"));
        bt_flash_med->setFont(font);

        gridLayout->addWidget(bt_flash_med, 4, 0, 1, 1);

        bt_step_0 = new QPushButton(gridLayoutWidget);
        bt_step_0->setObjectName(QString::fromUtf8("bt_step_0"));
        bt_step_0->setFont(font);

        gridLayout->addWidget(bt_step_0, 0, 2, 1, 1);

        bt_rainbow_med = new QPushButton(gridLayoutWidget);
        bt_rainbow_med->setObjectName(QString::fromUtf8("bt_rainbow_med"));
        bt_rainbow_med->setFont(font);

        gridLayout->addWidget(bt_rainbow_med, 9, 0, 1, 1);

        bt_off = new QPushButton(gridLayoutWidget);
        bt_off->setObjectName(QString::fromUtf8("bt_off"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bt_off->sizePolicy().hasHeightForWidth());
        bt_off->setSizePolicy(sizePolicy);
        bt_off->setMaximumSize(QSize(600, 400));
        QFont font1;
        font1.setPointSize(40);
        bt_off->setFont(font1);

        gridLayout->addWidget(bt_off, 0, 1, 8, 1);

        bt_step_4 = new QPushButton(gridLayoutWidget);
        bt_step_4->setObjectName(QString::fromUtf8("bt_step_4"));
        bt_step_4->setFont(font);

        gridLayout->addWidget(bt_step_4, 5, 2, 1, 1);

        bt_rainbow_slow = new QPushButton(gridLayoutWidget);
        bt_rainbow_slow->setObjectName(QString::fromUtf8("bt_rainbow_slow"));
        bt_rainbow_slow->setFont(font);

        gridLayout->addWidget(bt_rainbow_slow, 8, 0, 1, 1);

        bt_step_up = new QPushButton(gridLayoutWidget);
        bt_step_up->setObjectName(QString::fromUtf8("bt_step_up"));
        bt_step_up->setFont(font);

        gridLayout->addWidget(bt_step_up, 11, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        bt_step_9 = new QPushButton(gridLayoutWidget);
        bt_step_9->setObjectName(QString::fromUtf8("bt_step_9"));
        bt_step_9->setFont(font);

        gridLayout->addWidget(bt_step_9, 10, 2, 1, 1);

        bt_step_1 = new QPushButton(gridLayoutWidget);
        bt_step_1->setObjectName(QString::fromUtf8("bt_step_1"));
        bt_step_1->setFont(font);

        gridLayout->addWidget(bt_step_1, 2, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        bt_flash_strobe = new QPushButton(gridLayoutWidget);
        bt_flash_strobe->setObjectName(QString::fromUtf8("bt_flash_strobe"));
        bt_flash_strobe->setFont(font);

        gridLayout->addWidget(bt_flash_strobe, 6, 0, 1, 1);

        bt_fade_med = new QPushButton(gridLayoutWidget);
        bt_fade_med->setObjectName(QString::fromUtf8("bt_fade_med"));
        bt_fade_med->setFont(font);

        gridLayout->addWidget(bt_fade_med, 2, 0, 1, 1);

        bt_step_6 = new QPushButton(gridLayoutWidget);
        bt_step_6->setObjectName(QString::fromUtf8("bt_step_6"));
        bt_step_6->setFont(font);

        gridLayout->addWidget(bt_step_6, 7, 2, 1, 1);

        bt_step_8 = new QPushButton(gridLayoutWidget);
        bt_step_8->setObjectName(QString::fromUtf8("bt_step_8"));
        bt_step_8->setFont(font);

        gridLayout->addWidget(bt_step_8, 9, 2, 1, 1);

        bt_step_2 = new QPushButton(gridLayoutWidget);
        bt_step_2->setObjectName(QString::fromUtf8("bt_step_2"));
        bt_step_2->setFont(font);

        gridLayout->addWidget(bt_step_2, 3, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        bt_step_12 = new QPushButton(gridLayoutWidget);
        bt_step_12->setObjectName(QString::fromUtf8("bt_step_12"));
        bt_step_12->setFont(font);

        gridLayout->addWidget(bt_step_12, 13, 2, 1, 1);

        bt_step_14 = new QPushButton(gridLayoutWidget);
        bt_step_14->setObjectName(QString::fromUtf8("bt_step_14"));
        bt_step_14->setFont(font);

        gridLayout->addWidget(bt_step_14, 15, 2, 1, 1);

        bt_step_15 = new QPushButton(gridLayoutWidget);
        bt_step_15->setObjectName(QString::fromUtf8("bt_step_15"));
        bt_step_15->setFont(font);

        gridLayout->addWidget(bt_step_15, 16, 2, 1, 1);

        bt_step_10 = new QPushButton(gridLayoutWidget);
        bt_step_10->setObjectName(QString::fromUtf8("bt_step_10"));
        bt_step_10->setFont(font);

        gridLayout->addWidget(bt_step_10, 11, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 10, 0, 1, 1);

        bt_step_13 = new QPushButton(gridLayoutWidget);
        bt_step_13->setObjectName(QString::fromUtf8("bt_step_13"));
        bt_step_13->setFont(font);

        gridLayout->addWidget(bt_step_13, 14, 2, 1, 1);

        bt_step_16 = new QPushButton(gridLayoutWidget);
        bt_step_16->setObjectName(QString::fromUtf8("bt_step_16"));
        bt_step_16->setFont(font);

        gridLayout->addWidget(bt_step_16, 17, 2, 1, 1);

        bt_step_7 = new QPushButton(gridLayoutWidget);
        bt_step_7->setObjectName(QString::fromUtf8("bt_step_7"));
        bt_step_7->setFont(font);

        gridLayout->addWidget(bt_step_7, 8, 2, 1, 1);

        bt_setp_down = new QPushButton(gridLayoutWidget);
        bt_setp_down->setObjectName(QString::fromUtf8("bt_setp_down"));
        bt_setp_down->setFont(font);

        gridLayout->addWidget(bt_setp_down, 12, 0, 1, 1);

        bt_fade_slow = new QPushButton(gridLayoutWidget);
        bt_fade_slow->setObjectName(QString::fromUtf8("bt_fade_slow"));
        bt_fade_slow->setFont(font);

        gridLayout->addWidget(bt_fade_slow, 1, 0, 1, 1);

        bt_b = new QPushButton(gridLayoutWidget);
        bt_b->setObjectName(QString::fromUtf8("bt_b"));
        QFont font3;
        font3.setPointSize(27);
        bt_b->setFont(font3);

        gridLayout->addWidget(bt_b, 14, 1, 2, 1);

        bt_g = new QPushButton(gridLayoutWidget);
        bt_g->setObjectName(QString::fromUtf8("bt_g"));
        bt_g->setFont(font3);

        gridLayout->addWidget(bt_g, 12, 1, 2, 1);

        bt_r = new QPushButton(gridLayoutWidget);
        bt_r->setObjectName(QString::fromUtf8("bt_r"));
        bt_r->setFont(font3);

        gridLayout->addWidget(bt_r, 10, 1, 2, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font4;
        font4.setPointSize(23);
        pushButton->setFont(font4);

        gridLayout->addWidget(pushButton, 16, 0, 2, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bt_step_5->setText(QCoreApplication::translate("MainWindow", "Step 5 - Arvore 4", nullptr));
        bt_step_11->setText(QCoreApplication::translate("MainWindow", "Step 11 - Arco Direito", nullptr));
        bt_flash_fast->setText(QCoreApplication::translate("MainWindow", "Fast", nullptr));
        bt_step_3->setText(QCoreApplication::translate("MainWindow", "Step 3 - Arvore 2", nullptr));
        bt_flash_med->setText(QCoreApplication::translate("MainWindow", "Med", nullptr));
        bt_step_0->setText(QCoreApplication::translate("MainWindow", "Step 0 - OFF", nullptr));
        bt_rainbow_med->setText(QCoreApplication::translate("MainWindow", "Med", nullptr));
        bt_off->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        bt_step_4->setText(QCoreApplication::translate("MainWindow", "Step 4 - Arvore 3", nullptr));
        bt_rainbow_slow->setText(QCoreApplication::translate("MainWindow", "Slow", nullptr));
        bt_step_up->setText(QCoreApplication::translate("MainWindow", "Step +", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Flash", nullptr));
        bt_step_9->setText(QCoreApplication::translate("MainWindow", "Step 9 - Muro Esquerda", nullptr));
        bt_step_1->setText(QCoreApplication::translate("MainWindow", "Step 1 - Arvore 0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Fade", nullptr));
        bt_flash_strobe->setText(QCoreApplication::translate("MainWindow", "Strobe", nullptr));
        bt_fade_med->setText(QCoreApplication::translate("MainWindow", "Med", nullptr));
        bt_step_6->setText(QCoreApplication::translate("MainWindow", "Step 6 - Arvore 5", nullptr));
        bt_step_8->setText(QCoreApplication::translate("MainWindow", "Step 8 - Torre Esquerda", nullptr));
        bt_step_2->setText(QCoreApplication::translate("MainWindow", "Step 2 - Arvore 1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rainbow", nullptr));
        bt_step_12->setText(QCoreApplication::translate("MainWindow", "Step 12 - Escada", nullptr));
        bt_step_14->setText(QCoreApplication::translate("MainWindow", "Step 14 - Torre Direita", nullptr));
        bt_step_15->setText(QCoreApplication::translate("MainWindow", "Step 15 - BCK 1", nullptr));
        bt_step_10->setText(QCoreApplication::translate("MainWindow", "Step 10 - Arco Esquerda", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        bt_step_13->setText(QCoreApplication::translate("MainWindow", "Step 13 - Muro Direita", nullptr));
        bt_step_16->setText(QCoreApplication::translate("MainWindow", "Step 16 - BCK 2 - TUDO", nullptr));
        bt_step_7->setText(QCoreApplication::translate("MainWindow", "Step 7 - Arvore 6", nullptr));
        bt_setp_down->setText(QCoreApplication::translate("MainWindow", "Step -", nullptr));
        bt_fade_slow->setText(QCoreApplication::translate("MainWindow", "Slow", nullptr));
        bt_b->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        bt_g->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        bt_r->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
