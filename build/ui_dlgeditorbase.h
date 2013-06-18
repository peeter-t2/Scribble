#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgeditorbase.ui'
**
** Created: Sat Jun 8 19:29:18 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGEDITORBASE_H
#define UI_DLGEDITORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgEditorBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *kcfg_ExternalEditor;
    QStackedWidget *stackCommands;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *kcfg_ExternalEditorCommand;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *leReadOnlyCommand;
    QLabel *label_2;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *DlgEditorBase)
    {
        if (DlgEditorBase->objectName().isEmpty())
            DlgEditorBase->setObjectName(QString::fromUtf8("DlgEditorBase"));
        DlgEditorBase->resize(375, 108);
        verticalLayout_3 = new QVBoxLayout(DlgEditorBase);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(DlgEditorBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        kcfg_ExternalEditor = new QComboBox(groupBox_2);
        kcfg_ExternalEditor->setObjectName(QString::fromUtf8("kcfg_ExternalEditor"));

        gridLayout->addWidget(kcfg_ExternalEditor, 0, 1, 1, 1);

        stackCommands = new QStackedWidget(groupBox_2);
        stackCommands->setObjectName(QString::fromUtf8("stackCommands"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        kcfg_ExternalEditorCommand = new QLineEdit(page);
        kcfg_ExternalEditorCommand->setObjectName(QString::fromUtf8("kcfg_ExternalEditorCommand"));

        verticalLayout_2->addWidget(kcfg_ExternalEditorCommand);

        stackCommands->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        leReadOnlyCommand = new QLineEdit(page_2);
        leReadOnlyCommand->setObjectName(QString::fromUtf8("leReadOnlyCommand"));
        leReadOnlyCommand->setReadOnly(true);

        verticalLayout->addWidget(leReadOnlyCommand);

        stackCommands->addWidget(page_2);

        gridLayout->addWidget(stackCommands, 1, 1, 2, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacerItem);


        retranslateUi(DlgEditorBase);

        stackCommands->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DlgEditorBase);
    } // setupUi

    void retranslateUi(QWidget *DlgEditorBase)
    {
        groupBox_2->setTitle(tr2i18n("Editor", 0));
        label->setText(tr2i18n("Editor:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_ExternalEditor->setWhatsThis(tr2i18n("Choose the editor you want to launch when Okular wants to open a source file.", "@info:whatsthis"));
#endif // QT_NO_WHATSTHIS
        label_2->setText(tr2i18n("Command:", 0));
        Q_UNUSED(DlgEditorBase);
    } // retranslateUi

};

namespace Ui {
    class DlgEditorBase: public Ui_DlgEditorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGEDITORBASE_H

