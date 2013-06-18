#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'pdfsettingswidget.ui'
**
** Created: Sat Jun 8 19:31:13 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDFSETTINGSWIDGET_H
#define UI_PDFSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_PDFSettingsWidget
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    KComboBox *kcfg_EnhanceThinLines;

    void setupUi(QWidget *PDFSettingsWidget)
    {
        if (PDFSettingsWidget->objectName().isEmpty())
            PDFSettingsWidget->setObjectName(QString::fromUtf8("PDFSettingsWidget"));
        formLayout = new QFormLayout(PDFSettingsWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label = new QLabel(PDFSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        kcfg_EnhanceThinLines = new KComboBox(PDFSettingsWidget);
        kcfg_EnhanceThinLines->setObjectName(QString::fromUtf8("kcfg_EnhanceThinLines"));

        formLayout->setWidget(0, QFormLayout::FieldRole, kcfg_EnhanceThinLines);


        retranslateUi(PDFSettingsWidget);

        QMetaObject::connectSlotsByName(PDFSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *PDFSettingsWidget)
    {
        label->setText(tr2i18n("Enhance thin lines:", 0));
        kcfg_EnhanceThinLines->clear();
        kcfg_EnhanceThinLines->insertItems(0, QStringList()
         << tr2i18n("No", 0)
         << tr2i18n("Solid", 0)
         << tr2i18n("Shape", 0)
        );
        Q_UNUSED(PDFSettingsWidget);
    } // retranslateUi

};

namespace Ui {
    class PDFSettingsWidget: public Ui_PDFSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PDFSETTINGSWIDGET_H

