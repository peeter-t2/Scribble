#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgaccessibilitybase.ui'
**
** Created: Sat Jun 8 19:29:18 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGACCESSIBILITYBASE_H
#define UI_DLGACCESSIBILITYBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcolorbutton.h"
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_DlgAccessibilityBase
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *kcfg_HighlightImages;
    QCheckBox *kcfg_HighlightLinks;
    QGroupBox *kcfg_ChangeColors;
    QVBoxLayout *vboxLayout1;
    QLabel *warn;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    KComboBox *kcfg_RenderMode;
    QSpacerItem *spacerItem;
    QWidget *page_invert;
    QWidget *page_paperColor;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1;
    KColorButton *kcfg_PaperColor;
    QWidget *page_darkLight;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel3;
    KColorButton *kcfg_RecolorForeground;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel3_2;
    KColorButton *kcfg_RecolorBackground;
    QWidget *page_bw;
    QVBoxLayout *vboxLayout4;
    QGridLayout *gridLayout;
    QLabel *textLabel2;
    QSlider *kcfg_BWThreshold;
    QLabel *textLabel2_2;
    QSlider *kcfg_BWContrast;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *DlgAccessibilityBase)
    {
        if (DlgAccessibilityBase->objectName().isEmpty())
            DlgAccessibilityBase->setObjectName(QString::fromUtf8("DlgAccessibilityBase"));
        DlgAccessibilityBase->resize(374, 327);
        vboxLayout = new QVBoxLayout(DlgAccessibilityBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        kcfg_HighlightImages = new QCheckBox(DlgAccessibilityBase);
        kcfg_HighlightImages->setObjectName(QString::fromUtf8("kcfg_HighlightImages"));

        vboxLayout->addWidget(kcfg_HighlightImages);

        kcfg_HighlightLinks = new QCheckBox(DlgAccessibilityBase);
        kcfg_HighlightLinks->setObjectName(QString::fromUtf8("kcfg_HighlightLinks"));

        vboxLayout->addWidget(kcfg_HighlightLinks);

        kcfg_ChangeColors = new QGroupBox(DlgAccessibilityBase);
        kcfg_ChangeColors->setObjectName(QString::fromUtf8("kcfg_ChangeColors"));
        kcfg_ChangeColors->setEnabled(true);
        kcfg_ChangeColors->setCheckable(true);
        kcfg_ChangeColors->setChecked(false);
        vboxLayout1 = new QVBoxLayout(kcfg_ChangeColors);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        warn = new QLabel(kcfg_ChangeColors);
        warn->setObjectName(QString::fromUtf8("warn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(warn->sizePolicy().hasHeightForWidth());
        warn->setSizePolicy(sizePolicy);
        warn->setTextFormat(Qt::PlainText);
        warn->setWordWrap(true);

        vboxLayout1->addWidget(warn);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(kcfg_ChangeColors);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(label);

        kcfg_RenderMode = new KComboBox(kcfg_ChangeColors);
        kcfg_RenderMode->setObjectName(QString::fromUtf8("kcfg_RenderMode"));

        hboxLayout->addWidget(kcfg_RenderMode);


        vboxLayout1->addLayout(hboxLayout);

        spacerItem = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout1->addItem(spacerItem);

        page_invert = new QWidget(kcfg_ChangeColors);
        page_invert->setObjectName(QString::fromUtf8("page_invert"));

        vboxLayout1->addWidget(page_invert);

        page_paperColor = new QWidget(kcfg_ChangeColors);
        page_paperColor->setObjectName(QString::fromUtf8("page_paperColor"));
        vboxLayout2 = new QVBoxLayout(page_paperColor);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(page_paperColor);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(textLabel1);

        kcfg_PaperColor = new KColorButton(page_paperColor);
        kcfg_PaperColor->setObjectName(QString::fromUtf8("kcfg_PaperColor"));

        hboxLayout1->addWidget(kcfg_PaperColor);


        vboxLayout2->addLayout(hboxLayout1);


        vboxLayout1->addWidget(page_paperColor);

        page_darkLight = new QWidget(kcfg_ChangeColors);
        page_darkLight->setObjectName(QString::fromUtf8("page_darkLight"));
        vboxLayout3 = new QVBoxLayout(page_darkLight);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        textLabel3 = new QLabel(page_darkLight);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(textLabel3);

        kcfg_RecolorForeground = new KColorButton(page_darkLight);
        kcfg_RecolorForeground->setObjectName(QString::fromUtf8("kcfg_RecolorForeground"));

        hboxLayout2->addWidget(kcfg_RecolorForeground);


        vboxLayout3->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        textLabel3_2 = new QLabel(page_darkLight);
        textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));
        textLabel3_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout3->addWidget(textLabel3_2);

        kcfg_RecolorBackground = new KColorButton(page_darkLight);
        kcfg_RecolorBackground->setObjectName(QString::fromUtf8("kcfg_RecolorBackground"));

        hboxLayout3->addWidget(kcfg_RecolorBackground);


        vboxLayout3->addLayout(hboxLayout3);


        vboxLayout1->addWidget(page_darkLight);

        page_bw = new QWidget(kcfg_ChangeColors);
        page_bw->setObjectName(QString::fromUtf8("page_bw"));
        vboxLayout4 = new QVBoxLayout(page_bw);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel2 = new QLabel(page_bw);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy1);
        textLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textLabel2, 0, 0, 1, 1);

        kcfg_BWThreshold = new QSlider(page_bw);
        kcfg_BWThreshold->setObjectName(QString::fromUtf8("kcfg_BWThreshold"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(kcfg_BWThreshold->sizePolicy().hasHeightForWidth());
        kcfg_BWThreshold->setSizePolicy(sizePolicy2);
        kcfg_BWThreshold->setPageStep(16);
        kcfg_BWThreshold->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(kcfg_BWThreshold, 0, 1, 1, 1);

        textLabel2_2 = new QLabel(page_bw);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        sizePolicy1.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy1);
        textLabel2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textLabel2_2, 1, 0, 1, 1);

        kcfg_BWContrast = new QSlider(page_bw);
        kcfg_BWContrast->setObjectName(QString::fromUtf8("kcfg_BWContrast"));
        sizePolicy2.setHeightForWidth(kcfg_BWContrast->sizePolicy().hasHeightForWidth());
        kcfg_BWContrast->setSizePolicy(sizePolicy2);
        kcfg_BWContrast->setPageStep(1);
        kcfg_BWContrast->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(kcfg_BWContrast, 1, 1, 1, 1);


        vboxLayout4->addLayout(gridLayout);


        vboxLayout1->addWidget(page_bw);


        vboxLayout->addWidget(kcfg_ChangeColors);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(kcfg_PaperColor);
#endif // QT_NO_SHORTCUT

        retranslateUi(DlgAccessibilityBase);

        QMetaObject::connectSlotsByName(DlgAccessibilityBase);
    } // setupUi

    void retranslateUi(QWidget *DlgAccessibilityBase)
    {
        kcfg_HighlightImages->setText(tr2i18n("Draw border around &Images", 0));
        kcfg_HighlightLinks->setText(tr2i18n("Draw border around &Links", 0));
        kcfg_ChangeColors->setTitle(tr2i18n("Change &colors", 0));
        warn->setText(tr2i18n("Warning: these options can badly affect drawing speed.", 0));
        label->setText(tr2i18n("Color mode:", 0));
        kcfg_RenderMode->clear();
        kcfg_RenderMode->insertItems(0, QStringList()
         << tr2i18n("Invert Colors", 0)
         << tr2i18n("Change Paper Color", 0)
         << tr2i18n("Change Dark & Light Colors", 0)
         << tr2i18n("Convert to Black & White", 0)
        );
        textLabel1->setText(tr2i18n("Paper color:", 0));
        textLabel3->setText(tr2i18n("Dark color:", 0));
        textLabel3_2->setText(tr2i18n("Light color:", 0));
        textLabel2->setText(tr2i18n("Threshold:", 0));
        textLabel2_2->setText(tr2i18n("Contrast:", 0));
        Q_UNUSED(DlgAccessibilityBase);
    } // retranslateUi

};

namespace Ui {
    class DlgAccessibilityBase: public Ui_DlgAccessibilityBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGACCESSIBILITYBASE_H

