#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgpresentationbase.ui'
**
** Created: Sat Jun 8 19:29:18 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPRESENTATIONBASE_H
#define UI_DLGPRESENTATIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcolorbutton.h"
#include "knuminput.h"

QT_BEGIN_NAMESPACE

class Ui_DlgPresentationBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QCheckBox *kcfg_SlidesAdvance;
    KIntSpinBox *kcfg_SlidesAdvanceTime;
    QCheckBox *kcfg_SlidesLoop;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QLabel *textLabel3;
    KColorButton *kcfg_SlidesBackgroundColor;
    QLabel *label;
    KColorButton *kcfg_SlidesPencilColor;
    QLabel *textLabel2;
    QComboBox *kcfg_SlidesCursor;
    QCheckBox *kcfg_SlidesShowProgress;
    QCheckBox *kcfg_SlidesShowSummary;
    QGroupBox *kcfg_SlidesTransitionsEnabled;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QComboBox *kcfg_SlidesTransition;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *screenCombo;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *DlgPresentationBase)
    {
        if (DlgPresentationBase->objectName().isEmpty())
            DlgPresentationBase->setObjectName(QString::fromUtf8("DlgPresentationBase"));
        DlgPresentationBase->resize(400, 446);
        verticalLayout_2 = new QVBoxLayout(DlgPresentationBase);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(DlgPresentationBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        kcfg_SlidesAdvance = new QCheckBox(groupBox);
        kcfg_SlidesAdvance->setObjectName(QString::fromUtf8("kcfg_SlidesAdvance"));

        hboxLayout->addWidget(kcfg_SlidesAdvance);

        kcfg_SlidesAdvanceTime = new KIntSpinBox(groupBox);
        kcfg_SlidesAdvanceTime->setObjectName(QString::fromUtf8("kcfg_SlidesAdvanceTime"));
        kcfg_SlidesAdvanceTime->setEnabled(false);
        kcfg_SlidesAdvanceTime->setValue(5);

        hboxLayout->addWidget(kcfg_SlidesAdvanceTime);


        vboxLayout->addLayout(hboxLayout);

        kcfg_SlidesLoop = new QCheckBox(groupBox);
        kcfg_SlidesLoop->setObjectName(QString::fromUtf8("kcfg_SlidesLoop"));

        vboxLayout->addWidget(kcfg_SlidesLoop);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DlgPresentationBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textLabel3 = new QLabel(groupBox_2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textLabel3, 0, 0, 1, 1);

        kcfg_SlidesBackgroundColor = new KColorButton(groupBox_2);
        kcfg_SlidesBackgroundColor->setObjectName(QString::fromUtf8("kcfg_SlidesBackgroundColor"));

        gridLayout_3->addWidget(kcfg_SlidesBackgroundColor, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        kcfg_SlidesPencilColor = new KColorButton(groupBox_2);
        kcfg_SlidesPencilColor->setObjectName(QString::fromUtf8("kcfg_SlidesPencilColor"));

        gridLayout_3->addWidget(kcfg_SlidesPencilColor, 1, 1, 1, 1);

        textLabel2 = new QLabel(groupBox_2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(textLabel2, 2, 0, 1, 1);

        kcfg_SlidesCursor = new QComboBox(groupBox_2);
        kcfg_SlidesCursor->setObjectName(QString::fromUtf8("kcfg_SlidesCursor"));

        gridLayout_3->addWidget(kcfg_SlidesCursor, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        kcfg_SlidesShowProgress = new QCheckBox(groupBox_2);
        kcfg_SlidesShowProgress->setObjectName(QString::fromUtf8("kcfg_SlidesShowProgress"));

        verticalLayout->addWidget(kcfg_SlidesShowProgress);

        kcfg_SlidesShowSummary = new QCheckBox(groupBox_2);
        kcfg_SlidesShowSummary->setObjectName(QString::fromUtf8("kcfg_SlidesShowSummary"));

        verticalLayout->addWidget(kcfg_SlidesShowSummary);


        verticalLayout_2->addWidget(groupBox_2);

        kcfg_SlidesTransitionsEnabled = new QGroupBox(DlgPresentationBase);
        kcfg_SlidesTransitionsEnabled->setObjectName(QString::fromUtf8("kcfg_SlidesTransitionsEnabled"));
        kcfg_SlidesTransitionsEnabled->setCheckable(true);
        kcfg_SlidesTransitionsEnabled->setChecked(true);
        gridLayout = new QGridLayout(kcfg_SlidesTransitionsEnabled);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(kcfg_SlidesTransitionsEnabled);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        kcfg_SlidesTransition = new QComboBox(kcfg_SlidesTransitionsEnabled);
        kcfg_SlidesTransition->setObjectName(QString::fromUtf8("kcfg_SlidesTransition"));

        gridLayout->addWidget(kcfg_SlidesTransition, 0, 1, 1, 1);


        verticalLayout_2->addWidget(kcfg_SlidesTransitionsEnabled);

        groupBox_4 = new QGroupBox(DlgPresentationBase);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        screenCombo = new QComboBox(groupBox_4);
        screenCombo->setObjectName(QString::fromUtf8("screenCombo"));

        gridLayout_2->addWidget(screenCombo, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        spacerItem = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem);


        retranslateUi(DlgPresentationBase);
        QObject::connect(kcfg_SlidesAdvance, SIGNAL(toggled(bool)), kcfg_SlidesAdvanceTime, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(DlgPresentationBase);
    } // setupUi

    void retranslateUi(QWidget *DlgPresentationBase)
    {
        groupBox->setTitle(tr2i18n("Navigation", 0));
        kcfg_SlidesAdvance->setText(tr2i18n("Advance every:", 0));
        kcfg_SlidesAdvanceTime->setSuffix(tr2i18n(" sec.", 0));
        kcfg_SlidesLoop->setText(tr2i18n("Loop after last page", 0));
        groupBox_2->setTitle(tr2i18n("Appearance", 0));
        textLabel3->setText(tr2i18n("Background color:", 0));
        label->setText(tr2i18n("Pencil color:", 0));
        textLabel2->setText(tr2i18n("Mouse cursor:", 0));
        kcfg_SlidesCursor->clear();
        kcfg_SlidesCursor->insertItems(0, QStringList()
         << tr2i18n("Hidden After Delay", 0)
         << tr2i18n("Always Visible", 0)
         << tr2i18n("Always Hidden", 0)
        );
        kcfg_SlidesShowProgress->setText(tr2i18n("Show &progress indicator", 0));
        kcfg_SlidesShowSummary->setText(tr2i18n("Show s&ummary page", 0));
        kcfg_SlidesTransitionsEnabled->setTitle(tr2i18n("Enable transitions", 0));
        textLabel1->setText(tr2i18n("Default transition:", 0));
        kcfg_SlidesTransition->clear();
        kcfg_SlidesTransition->insertItems(0, QStringList()
         << tr2i18n("Blinds Vertical", 0)
         << tr2i18n("Blinds Horizontal", 0)
         << tr2i18n("Box In", 0)
         << tr2i18n("Box Out", 0)
         << tr2i18n("Dissolve", 0)
         << tr2i18n("Glitter Down", 0)
         << tr2i18n("Glitter Right", 0)
         << tr2i18n("Glitter Right-Down", 0)
         << tr2i18n("Random Transition", 0)
         << tr2i18n("Replace", 0)
         << tr2i18n("Split Horizontal In", 0)
         << tr2i18n("Split Horizontal Out", 0)
         << tr2i18n("Split Vertical In", 0)
         << tr2i18n("Split Vertical Out", 0)
         << tr2i18n("Wipe Down", 0)
         << tr2i18n("Wipe Right", 0)
         << tr2i18n("Wipe Left", 0)
         << tr2i18n("Wipe Up", 0)
        );
        groupBox_4->setTitle(tr2i18n("Placement", 0));
        label_2->setText(tr2i18n("Screen:", 0));
        Q_UNUSED(DlgPresentationBase);
    } // retranslateUi

};

namespace Ui {
    class DlgPresentationBase: public Ui_DlgPresentationBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGPRESENTATIONBASE_H

