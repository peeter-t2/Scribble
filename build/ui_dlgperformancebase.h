#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgperformancebase.ui'
**
** Created: Sat Jun 8 19:29:18 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPERFORMANCEBASE_H
#define UI_DLGPERFORMANCEBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <kiconloader.h>
#include "kbuttongroup.h"

QT_BEGIN_NAMESPACE

class Ui_DlgPerformanceBase
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout2;
    QCheckBox *kcfg_EnableCompositing;
    QVBoxLayout *vboxLayout3;
    QLabel *cpuLabel;
    QSpacerItem *spacerItem;
    KButtonGroup *kcfg_MemoryLevel;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout5;
    QRadioButton *lowRadio;
    QRadioButton *normalRadio;
    QRadioButton *aggressiveRadio;
    QRadioButton *greedyRadio;
    QVBoxLayout *vboxLayout6;
    QLabel *memoryLabel;
    QSpacerItem *spacerItem1;
    QLabel *descLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *kcfg_TextAntialias;
    QCheckBox *kcfg_GraphicsAntialias;
    QCheckBox *kcfg_TextHinting;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *DlgPerformanceBase)
    {
        if (DlgPerformanceBase->objectName().isEmpty())
            DlgPerformanceBase->setObjectName(QString::fromUtf8("DlgPerformanceBase"));
        DlgPerformanceBase->resize(316, 344);
        vboxLayout = new QVBoxLayout(DlgPerformanceBase);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(DlgPerformanceBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
#ifndef UI_Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout2 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        kcfg_EnableCompositing = new QCheckBox(groupBox);
        kcfg_EnableCompositing->setObjectName(QString::fromUtf8("kcfg_EnableCompositing"));

        vboxLayout2->addWidget(kcfg_EnableCompositing);


        hboxLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        cpuLabel = new QLabel(groupBox);
        cpuLabel->setObjectName(QString::fromUtf8("cpuLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cpuLabel->sizePolicy().hasHeightForWidth());
        cpuLabel->setSizePolicy(sizePolicy);

        vboxLayout3->addWidget(cpuLabel);

        spacerItem = new QSpacerItem(21, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

        vboxLayout3->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout3);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(groupBox);

        kcfg_MemoryLevel = new KButtonGroup(DlgPerformanceBase);
        kcfg_MemoryLevel->setObjectName(QString::fromUtf8("kcfg_MemoryLevel"));
        vboxLayout4 = new QVBoxLayout(kcfg_MemoryLevel);
#ifndef UI_Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        vboxLayout5 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        lowRadio = new QRadioButton(kcfg_MemoryLevel);
        lowRadio->setObjectName(QString::fromUtf8("lowRadio"));

        vboxLayout5->addWidget(lowRadio);

        normalRadio = new QRadioButton(kcfg_MemoryLevel);
        normalRadio->setObjectName(QString::fromUtf8("normalRadio"));

        vboxLayout5->addWidget(normalRadio);

        aggressiveRadio = new QRadioButton(kcfg_MemoryLevel);
        aggressiveRadio->setObjectName(QString::fromUtf8("aggressiveRadio"));

        vboxLayout5->addWidget(aggressiveRadio);

        greedyRadio = new QRadioButton(kcfg_MemoryLevel);
        greedyRadio->setObjectName(QString::fromUtf8("greedyRadio"));

        vboxLayout5->addWidget(greedyRadio);


        hboxLayout1->addLayout(vboxLayout5);

        vboxLayout6 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout6->setSpacing(6);
#endif
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        memoryLabel = new QLabel(kcfg_MemoryLevel);
        memoryLabel->setObjectName(QString::fromUtf8("memoryLabel"));
        sizePolicy.setHeightForWidth(memoryLabel->sizePolicy().hasHeightForWidth());
        memoryLabel->setSizePolicy(sizePolicy);

        vboxLayout6->addWidget(memoryLabel);

        spacerItem1 = new QSpacerItem(21, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

        vboxLayout6->addItem(spacerItem1);


        hboxLayout1->addLayout(vboxLayout6);


        vboxLayout4->addLayout(hboxLayout1);

        descLabel = new QLabel(kcfg_MemoryLevel);
        descLabel->setObjectName(QString::fromUtf8("descLabel"));
        descLabel->setTextFormat(Qt::PlainText);
        descLabel->setAlignment(Qt::AlignVCenter);
        descLabel->setWordWrap(true);

        vboxLayout4->addWidget(descLabel);


        vboxLayout->addWidget(kcfg_MemoryLevel);

        groupBox_2 = new QGroupBox(DlgPerformanceBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        kcfg_TextAntialias = new QCheckBox(groupBox_2);
        kcfg_TextAntialias->setObjectName(QString::fromUtf8("kcfg_TextAntialias"));

        verticalLayout->addWidget(kcfg_TextAntialias);

        kcfg_GraphicsAntialias = new QCheckBox(groupBox_2);
        kcfg_GraphicsAntialias->setObjectName(QString::fromUtf8("kcfg_GraphicsAntialias"));

        verticalLayout->addWidget(kcfg_GraphicsAntialias);

        kcfg_TextHinting = new QCheckBox(groupBox_2);
        kcfg_TextHinting->setObjectName(QString::fromUtf8("kcfg_TextHinting"));

        verticalLayout->addWidget(kcfg_TextHinting);


        vboxLayout->addWidget(groupBox_2);

        spacerItem2 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);


        retranslateUi(DlgPerformanceBase);

        QMetaObject::connectSlotsByName(DlgPerformanceBase);
    } // setupUi

    void retranslateUi(QWidget *DlgPerformanceBase)
    {
        groupBox->setTitle(tr2i18n("CPU Usage", 0));
        kcfg_EnableCompositing->setText(tr2i18n("Enable &transparency effects", 0));
        kcfg_MemoryLevel->setTitle(tr2i18n("Memory Usage", 0));
        lowRadio->setText(tr2i18n("&Low", 0));
        normalRadio->setText(tr2i18n("&Normal (default)", 0));
        aggressiveRadio->setText(tr2i18n("&Aggressive", 0));
        greedyRadio->setText(tr2i18n("&Greedy", 0));
        descLabel->setText(QString());
        groupBox_2->setTitle(tr2i18n("Rendering", 0));
        kcfg_TextAntialias->setText(tr2i18n("Enable Text Antialias", 0));
        kcfg_GraphicsAntialias->setText(tr2i18n("Enable Graphics Antialias", 0));
        kcfg_TextHinting->setText(tr2i18n("Enable Text Hinting", 0));
        Q_UNUSED(DlgPerformanceBase);
    } // retranslateUi

};

namespace Ui {
    class DlgPerformanceBase: public Ui_DlgPerformanceBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGPERFORMANCEBASE_H

