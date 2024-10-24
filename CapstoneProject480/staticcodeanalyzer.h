#ifndef STATICCODEANALYZER_H
#define STATICCODEANALYZER_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include <ui_staticcodeanalyzer.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class StaticCodeAnalyzer;
}
QT_END_NAMESPACE

class StaticCodeAnalyzer : public QMainWindow
{
    Q_OBJECT

public:
    StaticCodeAnalyzer(QWidget *parent = nullptr);
    ~StaticCodeAnalyzer();

private slots:
    void loadFile();
    void analyzeCode();

private:
    Ui::StaticCodeAnalyzer *ui;
    QString currentFileContent;
};

#endif // STATICCODEANALYZER_H
