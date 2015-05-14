/********************************************************************************
** Form generated from reading UI file 'hitrater.ui'
**
** Created by: Qt User Interface Compiler version 5.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HITRATER_H
#define UI_HITRATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hitraterClass
{
public:
    QAction *actionTest1;
    QAction *actionTestr2;
    QAction *actionTt;
    QAction *actionTrt;
    QAction *actionTtt;
    QWidget *centralWidget;
    QGroupBox *groupBox_output;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_br;
    QListWidget *br_list;
    QLabel *label_dmgBurstBody;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_hr;
    QListWidget *hr_list;
    QLabel *label_dmgBurstHead;
    QVBoxLayout *verticalLayout_total;
    QLabel *label_total;
    QListWidget *listWidget_total;
    QLabel *label_dmgBurstTotal;
    QPushButton *pushButton_FileOut;
    QGroupBox *groupBox_input;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_input;
    QHBoxLayout *horizontalLayout_recoil;
    QLabel *label_2;
    QDoubleSpinBox *recL_doubleSpinBox;
    QDoubleSpinBox *recR_doubleSpinBox;
    QHBoxLayout *horizontalLayout_spread;
    QLabel *label_spread;
    QDoubleSpinBox *spread_doubleSpinBox;
    QHBoxLayout *horizontalLayout_spread_2;
    QLabel *label_maxSpread;
    QDoubleSpinBox *maxSpread_doubleSpinBox;
    QHBoxLayout *horizontalLayout_sinc;
    QLabel *label_sinc;
    QDoubleSpinBox *sinc_doubleSpinBox;
    QHBoxLayout *horizontalLayout_aim;
    QLabel *label_aim;
    QDoubleSpinBox *aimX_doubleSpinBox;
    QDoubleSpinBox *aimY_doubleSpinBox;
    QHBoxLayout *horizontalLayout_range;
    QLabel *label_range;
    QDoubleSpinBox *range_doubleSpinBox;
    QHBoxLayout *horizontalLayout_burst;
    QLabel *label_7;
    QSpinBox *bursts_spinBox;
    QHBoxLayout *horizontalLayout_runs;
    QLabel *label_6;
    QSpinBox *runs_spinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButtonMT;

    void setupUi(QMainWindow *hitraterClass)
    {
        if (hitraterClass->objectName().isEmpty())
            hitraterClass->setObjectName(QStringLiteral("hitraterClass"));
        hitraterClass->resize(320, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hitraterClass->sizePolicy().hasHeightForWidth());
        hitraterClass->setSizePolicy(sizePolicy);
        hitraterClass->setMaximumSize(QSize(320, 500));
        actionTest1 = new QAction(hitraterClass);
        actionTest1->setObjectName(QStringLiteral("actionTest1"));
        actionTest1->setIconVisibleInMenu(true);
        actionTestr2 = new QAction(hitraterClass);
        actionTestr2->setObjectName(QStringLiteral("actionTestr2"));
        actionTt = new QAction(hitraterClass);
        actionTt->setObjectName(QStringLiteral("actionTt"));
        actionTrt = new QAction(hitraterClass);
        actionTrt->setObjectName(QStringLiteral("actionTrt"));
        actionTtt = new QAction(hitraterClass);
        actionTtt->setObjectName(QStringLiteral("actionTtt"));
        centralWidget = new QWidget(hitraterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMaximumSize(QSize(320, 490));
        groupBox_output = new QGroupBox(centralWidget);
        groupBox_output->setObjectName(QStringLiteral("groupBox_output"));
        groupBox_output->setGeometry(QRect(10, 319, 300, 171));
        verticalLayoutWidget_2 = new QWidget(groupBox_output);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 15, 241, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_br = new QLabel(verticalLayoutWidget_2);
        label_br->setObjectName(QStringLiteral("label_br"));
        label_br->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_br);

        br_list = new QListWidget(verticalLayoutWidget_2);
        br_list->setObjectName(QStringLiteral("br_list"));
        br_list->setEnabled(true);

        verticalLayout_3->addWidget(br_list);

        label_dmgBurstBody = new QLabel(verticalLayoutWidget_2);
        label_dmgBurstBody->setObjectName(QStringLiteral("label_dmgBurstBody"));
        label_dmgBurstBody->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_dmgBurstBody);


        horizontalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_hr = new QLabel(verticalLayoutWidget_2);
        label_hr->setObjectName(QStringLiteral("label_hr"));
        label_hr->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_hr);

        hr_list = new QListWidget(verticalLayoutWidget_2);
        hr_list->setObjectName(QStringLiteral("hr_list"));

        verticalLayout_4->addWidget(hr_list);

        label_dmgBurstHead = new QLabel(verticalLayoutWidget_2);
        label_dmgBurstHead->setObjectName(QStringLiteral("label_dmgBurstHead"));
        label_dmgBurstHead->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_dmgBurstHead);


        horizontalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_total = new QVBoxLayout();
        verticalLayout_total->setSpacing(6);
        verticalLayout_total->setObjectName(QStringLiteral("verticalLayout_total"));
        label_total = new QLabel(verticalLayoutWidget_2);
        label_total->setObjectName(QStringLiteral("label_total"));
        label_total->setAlignment(Qt::AlignCenter);

        verticalLayout_total->addWidget(label_total);

        listWidget_total = new QListWidget(verticalLayoutWidget_2);
        listWidget_total->setObjectName(QStringLiteral("listWidget_total"));

        verticalLayout_total->addWidget(listWidget_total);

        label_dmgBurstTotal = new QLabel(verticalLayoutWidget_2);
        label_dmgBurstTotal->setObjectName(QStringLiteral("label_dmgBurstTotal"));
        label_dmgBurstTotal->setAlignment(Qt::AlignCenter);

        verticalLayout_total->addWidget(label_dmgBurstTotal);


        horizontalLayout_8->addLayout(verticalLayout_total);


        verticalLayout->addLayout(horizontalLayout_8);

        pushButton_FileOut = new QPushButton(verticalLayoutWidget_2);
        pushButton_FileOut->setObjectName(QStringLiteral("pushButton_FileOut"));

        verticalLayout->addWidget(pushButton_FileOut);

        groupBox_input = new QGroupBox(centralWidget);
        groupBox_input->setObjectName(QStringLiteral("groupBox_input"));
        groupBox_input->setGeometry(QRect(10, 5, 300, 311));
        sizePolicy.setHeightForWidth(groupBox_input->sizePolicy().hasHeightForWidth());
        groupBox_input->setSizePolicy(sizePolicy);
        groupBox_input->setMaximumSize(QSize(300, 320));
        verticalLayoutWidget = new QWidget(groupBox_input);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 15, 281, 291));
        verticalLayout_input = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_input->setSpacing(6);
        verticalLayout_input->setContentsMargins(11, 11, 11, 11);
        verticalLayout_input->setObjectName(QStringLiteral("verticalLayout_input"));
        verticalLayout_input->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_input->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_recoil = new QHBoxLayout();
        horizontalLayout_recoil->setSpacing(6);
        horizontalLayout_recoil->setObjectName(QStringLiteral("horizontalLayout_recoil"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_recoil->addWidget(label_2);

        recL_doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        recL_doubleSpinBox->setObjectName(QStringLiteral("recL_doubleSpinBox"));
        recL_doubleSpinBox->setDecimals(4);
        recL_doubleSpinBox->setMinimum(0);
        recL_doubleSpinBox->setMaximum(10);
        recL_doubleSpinBox->setSingleStep(0.1);
        recL_doubleSpinBox->setValue(0.1);

        horizontalLayout_recoil->addWidget(recL_doubleSpinBox);

        recR_doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        recR_doubleSpinBox->setObjectName(QStringLiteral("recR_doubleSpinBox"));
        recR_doubleSpinBox->setCursor(QCursor(Qt::ArrowCursor));
        recR_doubleSpinBox->setDecimals(4);
        recR_doubleSpinBox->setMaximum(10);
        recR_doubleSpinBox->setSingleStep(0.1);
        recR_doubleSpinBox->setValue(0.4);

        horizontalLayout_recoil->addWidget(recR_doubleSpinBox);


        verticalLayout_input->addLayout(horizontalLayout_recoil);

        horizontalLayout_spread = new QHBoxLayout();
        horizontalLayout_spread->setSpacing(6);
        horizontalLayout_spread->setObjectName(QStringLiteral("horizontalLayout_spread"));
        label_spread = new QLabel(verticalLayoutWidget);
        label_spread->setObjectName(QStringLiteral("label_spread"));

        horizontalLayout_spread->addWidget(label_spread);

        spread_doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        spread_doubleSpinBox->setObjectName(QStringLiteral("spread_doubleSpinBox"));
        spread_doubleSpinBox->setDecimals(4);
        spread_doubleSpinBox->setMaximum(10);
        spread_doubleSpinBox->setSingleStep(0.1);
        spread_doubleSpinBox->setValue(0.2);

        horizontalLayout_spread->addWidget(spread_doubleSpinBox);


        verticalLayout_input->addLayout(horizontalLayout_spread);

        horizontalLayout_spread_2 = new QHBoxLayout();
        horizontalLayout_spread_2->setSpacing(6);
        horizontalLayout_spread_2->setObjectName(QStringLiteral("horizontalLayout_spread_2"));
        label_maxSpread = new QLabel(verticalLayoutWidget);
        label_maxSpread->setObjectName(QStringLiteral("label_maxSpread"));

        horizontalLayout_spread_2->addWidget(label_maxSpread);

        maxSpread_doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        maxSpread_doubleSpinBox->setObjectName(QStringLiteral("maxSpread_doubleSpinBox"));
        maxSpread_doubleSpinBox->setDecimals(4);
        maxSpread_doubleSpinBox->setMaximum(10);
        maxSpread_doubleSpinBox->setSingleStep(0.1);
        maxSpread_doubleSpinBox->setValue(1.5);

        horizontalLayout_spread_2->addWidget(maxSpread_doubleSpinBox);


        verticalLayout_input->addLayout(horizontalLayout_spread_2);

        horizontalLayout_sinc = new QHBoxLayout();
        horizontalLayout_sinc->setSpacing(6);
        horizontalLayout_sinc->setObjectName(QStringLiteral("horizontalLayout_sinc"));
        label_sinc = new QLabel(verticalLayoutWidget);
        label_sinc->setObjectName(QStringLiteral("label_sinc"));

        horizontalLayout_sinc->addWidget(label_sinc);

        sinc_doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        sinc_doubleSpinBox->setObjectName(QStringLiteral("sinc_doubleSpinBox"));
        sinc_doubleSpinBox->setDecimals(4);
        sinc_doubleSpinBox->setMaximum(2);
        sinc_doubleSpinBox->setSingleStep(0.1);
        sinc_doubleSpinBox->setValue(0.1);

        horizontalLayout_sinc->addWidget(sinc_doubleSpinBox);


        verticalLayout_input->addLayout(horizontalLayout_sinc);

        horizontalLayout_aim = new QHBoxLayout();
        horizontalLayout_aim->setSpacing(6);
        horizontalLayout_aim->setObjectName(QStringLiteral("horizontalLayout_aim"));
        label_aim = new QLabel(verticalLayoutWidget);
        label_aim->setObjectName(QStringLiteral("label_aim"));

        horizontalLayout_aim->addWidget(label_aim);

        aimX_doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        aimX_doubleSpinBox->setObjectName(QStringLiteral("aimX_doubleSpinBox"));
        aimX_doubleSpinBox->setDecimals(3);
        aimX_doubleSpinBox->setMinimum(-1);
        aimX_doubleSpinBox->setMaximum(1);
        aimX_doubleSpinBox->setSingleStep(0.1);

        horizontalLayout_aim->addWidget(aimX_doubleSpinBox);

        aimY_doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        aimY_doubleSpinBox->setObjectName(QStringLiteral("aimY_doubleSpinBox"));
        aimY_doubleSpinBox->setDecimals(3);
        aimY_doubleSpinBox->setMinimum(-1);
        aimY_doubleSpinBox->setMaximum(1);
        aimY_doubleSpinBox->setSingleStep(0.1);

        horizontalLayout_aim->addWidget(aimY_doubleSpinBox);


        verticalLayout_input->addLayout(horizontalLayout_aim);

        horizontalLayout_range = new QHBoxLayout();
        horizontalLayout_range->setSpacing(6);
        horizontalLayout_range->setObjectName(QStringLiteral("horizontalLayout_range"));
        label_range = new QLabel(verticalLayoutWidget);
        label_range->setObjectName(QStringLiteral("label_range"));

        horizontalLayout_range->addWidget(label_range);

        range_doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        range_doubleSpinBox->setObjectName(QStringLiteral("range_doubleSpinBox"));
        range_doubleSpinBox->setMinimum(1);
        range_doubleSpinBox->setMaximum(500);
        range_doubleSpinBox->setValue(10);

        horizontalLayout_range->addWidget(range_doubleSpinBox);


        verticalLayout_input->addLayout(horizontalLayout_range);

        horizontalLayout_burst = new QHBoxLayout();
        horizontalLayout_burst->setSpacing(6);
        horizontalLayout_burst->setObjectName(QStringLiteral("horizontalLayout_burst"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_burst->addWidget(label_7);

        bursts_spinBox = new QSpinBox(verticalLayoutWidget);
        bursts_spinBox->setObjectName(QStringLiteral("bursts_spinBox"));
        bursts_spinBox->setMinimum(1);
        bursts_spinBox->setMaximum(201);

        horizontalLayout_burst->addWidget(bursts_spinBox);


        verticalLayout_input->addLayout(horizontalLayout_burst);

        horizontalLayout_runs = new QHBoxLayout();
        horizontalLayout_runs->setSpacing(6);
        horizontalLayout_runs->setObjectName(QStringLiteral("horizontalLayout_runs"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_runs->addWidget(label_6);

        runs_spinBox = new QSpinBox(verticalLayoutWidget);
        runs_spinBox->setObjectName(QStringLiteral("runs_spinBox"));
        runs_spinBox->setMinimum(1);
        runs_spinBox->setMaximum(1000000000);
        runs_spinBox->setValue(5000);

        horizontalLayout_runs->addWidget(runs_spinBox);


        verticalLayout_input->addLayout(horizontalLayout_runs);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButtonMT = new QPushButton(verticalLayoutWidget);
        pushButtonMT->setObjectName(QStringLiteral("pushButtonMT"));

        horizontalLayout->addWidget(pushButtonMT);


        verticalLayout_input->addLayout(horizontalLayout);

        hitraterClass->setCentralWidget(centralWidget);

        retranslateUi(hitraterClass);

        QMetaObject::connectSlotsByName(hitraterClass);
    } // setupUi

    void retranslateUi(QMainWindow *hitraterClass)
    {
        hitraterClass->setWindowTitle(QApplication::translate("hitraterClass", "Hitrater v1.1a", 0));
        actionTest1->setText(QApplication::translate("hitraterClass", "Test1", 0));
        actionTestr2->setText(QApplication::translate("hitraterClass", "testr2", 0));
        actionTt->setText(QApplication::translate("hitraterClass", "tt", 0));
        actionTrt->setText(QApplication::translate("hitraterClass", "trt", 0));
        actionTtt->setText(QApplication::translate("hitraterClass", "ttt", 0));
        groupBox_output->setTitle(QApplication::translate("hitraterClass", "Hit percentage", 0));
        label_br->setText(QApplication::translate("hitraterClass", "Body", 0));
        label_dmgBurstBody->setText(QApplication::translate("hitraterClass", "0", 0));
        label_hr->setText(QApplication::translate("hitraterClass", "Head", 0));
        label_dmgBurstHead->setText(QApplication::translate("hitraterClass", "0", 0));
        label_total->setText(QApplication::translate("hitraterClass", "Total", 0));
        label_dmgBurstTotal->setText(QApplication::translate("hitraterClass", "0", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_FileOut->setToolTip(QApplication::translate("hitraterClass", "<html><head/><body><p>Saves current data in Output to file</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_FileOut->setText(QApplication::translate("hitraterClass", "Save to file", 0));
        groupBox_input->setTitle(QApplication::translate("hitraterClass", "Input", 0));
        label_2->setText(QApplication::translate("hitraterClass", "Recoil", 0));
#ifndef QT_NO_TOOLTIP
        recL_doubleSpinBox->setToolTip(QApplication::translate("hitraterClass", "<html><head/><body><p>Left recoil</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        recR_doubleSpinBox->setToolTip(QApplication::translate("hitraterClass", "<html><head/><body><p>Right recoil</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_spread->setText(QApplication::translate("hitraterClass", "Spread", 0));
        label_maxSpread->setText(QApplication::translate("hitraterClass", "Max spread", 0));
        label_sinc->setText(QApplication::translate("hitraterClass", "Spread inc", 0));
        label_aim->setText(QApplication::translate("hitraterClass", "Aim", 0));
#ifndef QT_NO_TOOLTIP
        aimX_doubleSpinBox->setToolTip(QApplication::translate("hitraterClass", "<html><head/><body><p>X</p><p>Body: -0.27, 0.27</p><p>Head: -0.08, 0.08</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        aimY_doubleSpinBox->setToolTip(QApplication::translate("hitraterClass", "<html><head/><body><p>Y/Headglitch</p><p>Body: -0.46, 0.46</p><p>Head: 0.46/-0.07, 0,74/0.07</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_range->setText(QApplication::translate("hitraterClass", "Range", 0));
        label_7->setText(QApplication::translate("hitraterClass", "Burst length", 0));
        label_6->setText(QApplication::translate("hitraterClass", "Runs", 0));
        pushButton->setText(QApplication::translate("hitraterClass", "Run", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonMT->setToolTip(QApplication::translate("hitraterClass", "<html><head/><body><p>Use Multithreading</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButtonMT->setText(QApplication::translate("hitraterClass", "Run MT", 0));
    } // retranslateUi

};

namespace Ui {
    class hitraterClass: public Ui_hitraterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HITRATER_H
