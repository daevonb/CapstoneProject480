/********************************************************************************
** Form generated from reading UI file 'staticcodeanalyzer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICCODEANALYZER_H
#define UI_STATICCODEANALYZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaticCodeAnalyzer
{
public:
    QWidget *centralwidget;
    QPushButton *btnLoadFile;
    QPushButton *btnAnalyze;
    QTextEdit *textEditor;
    QLabel *labelResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StaticCodeAnalyzer)
    {
        if (StaticCodeAnalyzer->objectName().isEmpty())
            StaticCodeAnalyzer->setObjectName("StaticCodeAnalyzer");
        StaticCodeAnalyzer->resize(800, 600);
        centralwidget = new QWidget(StaticCodeAnalyzer);
        centralwidget->setObjectName("centralwidget");
        btnLoadFile = new QPushButton(centralwidget);
        btnLoadFile->setObjectName("btnLoadFile");
        btnLoadFile->setGeometry(QRect(180, 200, 80, 24));
        btnAnalyze = new QPushButton(centralwidget);
        btnAnalyze->setObjectName("btnAnalyze");
        btnAnalyze->setGeometry(QRect(490, 200, 80, 24));
        textEditor = new QTextEdit(centralwidget);
        textEditor->setObjectName("textEditor");
        textEditor->setGeometry(QRect(180, 40, 391, 151));
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName("labelResult");
        labelResult->setGeometry(QRect(180, 240, 391, 151));
        labelResult->setFrameShape(QFrame::Shape::Box);
        labelResult->setAlignment(Qt::AlignmentFlag::AlignCenter);
        StaticCodeAnalyzer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StaticCodeAnalyzer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        StaticCodeAnalyzer->setMenuBar(menubar);
        statusbar = new QStatusBar(StaticCodeAnalyzer);
        statusbar->setObjectName("statusbar");
        StaticCodeAnalyzer->setStatusBar(statusbar);

        retranslateUi(StaticCodeAnalyzer);

        QMetaObject::connectSlotsByName(StaticCodeAnalyzer);
    } // setupUi

    void retranslateUi(QMainWindow *StaticCodeAnalyzer)
    {
        StaticCodeAnalyzer->setWindowTitle(QCoreApplication::translate("StaticCodeAnalyzer", "StaticCodeAnalyzer", nullptr));
        btnLoadFile->setText(QCoreApplication::translate("StaticCodeAnalyzer", "Load File", nullptr));
        btnAnalyze->setText(QCoreApplication::translate("StaticCodeAnalyzer", "Analyze", nullptr));
        labelResult->setText(QCoreApplication::translate("StaticCodeAnalyzer", "Coding Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaticCodeAnalyzer: public Ui_StaticCodeAnalyzer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICCODEANALYZER_H
