#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgannotationsbase.ui'
**
** Created: Sat Jun 8 19:29:18 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGANNOTATIONSBASE_H
#define UI_DLGANNOTATIONSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgAnnotationsBase
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *kcfg_IdentityAuthor;
    QLabel *label_2;
    QGroupBox *annotToolsGroup;
    QVBoxLayout *annotToolsPlaceholder;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *DlgAnnotationsBase)
    {
        if (DlgAnnotationsBase->objectName().isEmpty())
            DlgAnnotationsBase->setObjectName(QString::fromUtf8("DlgAnnotationsBase"));
        DlgAnnotationsBase->resize(381, 155);
        vboxLayout = new QVBoxLayout(DlgAnnotationsBase);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(DlgAnnotationsBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        kcfg_IdentityAuthor = new QLineEdit(groupBox);
        kcfg_IdentityAuthor->setObjectName(QString::fromUtf8("kcfg_IdentityAuthor"));

        gridLayout->addWidget(kcfg_IdentityAuthor, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);


        vboxLayout->addWidget(groupBox);

        annotToolsGroup = new QGroupBox(DlgAnnotationsBase);
        annotToolsGroup->setObjectName(QString::fromUtf8("annotToolsGroup"));
        annotToolsPlaceholder = new QVBoxLayout(annotToolsGroup);
        annotToolsPlaceholder->setObjectName(QString::fromUtf8("annotToolsPlaceholder"));

        vboxLayout->addWidget(annotToolsGroup);

        spacerItem = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        vboxLayout->setStretch(1, 1);
#ifndef UI_QT_NO_SHORTCUT
        label->setBuddy(kcfg_IdentityAuthor);
#endif // QT_NO_SHORTCUT

        retranslateUi(DlgAnnotationsBase);

        QMetaObject::connectSlotsByName(DlgAnnotationsBase);
    } // setupUi

    void retranslateUi(QWidget *DlgAnnotationsBase)
    {
        groupBox->setTitle(tr2i18n("Identity", 0));
        label->setText(tr2i18n("&Author:", 0));
        label_2->setText(tr2i18n("<b>Note</b>: the information here is used only for comments and reviews. Information inserted here will not be transmitted without your knowledge.", 0));
        annotToolsGroup->setTitle(tr2i18n("Annotation tools", 0));
        Q_UNUSED(DlgAnnotationsBase);
    } // retranslateUi

};

namespace Ui {
    class DlgAnnotationsBase: public Ui_DlgAnnotationsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGANNOTATIONSBASE_H

