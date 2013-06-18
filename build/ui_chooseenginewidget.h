#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'chooseenginewidget.ui'
**
** Created: Sat Jun 8 19:28:21 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEENGINEWIDGET_H
#define UI_CHOOSEENGINEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseEngineWidget
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *description;
    QComboBox *engineList;

    void setupUi(QWidget *ChooseEngineWidget)
    {
        if (ChooseEngineWidget->objectName().isEmpty())
            ChooseEngineWidget->setObjectName(QString::fromUtf8("ChooseEngineWidget"));
        ChooseEngineWidget->resize(286, 96);
        vboxLayout = new QVBoxLayout(ChooseEngineWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        description = new QLabel(ChooseEngineWidget);
        description->setObjectName(QString::fromUtf8("description"));
        description->setTextFormat(Qt::RichText);

        vboxLayout->addWidget(description);

        engineList = new QComboBox(ChooseEngineWidget);
        engineList->setObjectName(QString::fromUtf8("engineList"));

        vboxLayout->addWidget(engineList);


        retranslateUi(ChooseEngineWidget);

        QMetaObject::connectSlotsByName(ChooseEngineWidget);
    } // setupUi

    void retranslateUi(QWidget *ChooseEngineWidget)
    {
        description->setText(QString());
        Q_UNUSED(ChooseEngineWidget);
    } // retranslateUi

};

namespace Ui {
    class ChooseEngineWidget: public Ui_ChooseEngineWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHOOSEENGINEWIDGET_H

