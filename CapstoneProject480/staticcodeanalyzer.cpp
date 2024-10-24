#include "staticcodeanalyzer.h"
#include "ui_staticcodeanalyzer.h"

StaticCodeAnalyzer::StaticCodeAnalyzer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StaticCodeAnalyzer)
{
    ui->setupUi(this);

    connect(ui->btnLoadFile, &QPushButton::clicked, this, &StaticCodeAnalyzer::loadFile);
    connect(ui->btnAnalyze, &QPushButton::clicked, this, &StaticCodeAnalyzer::analyzeCode);
}

void StaticCodeAnalyzer::loadFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open C++ Source File", "", "C++ Files (*.cpp *.h)");
    if (fileName.isEmpty())
        return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Cannot open file: " + fileName);
        return;
    }

    QTextStream in(&file);
    currentFileContent = in.readAll();
    ui->textEditor->setText(currentFileContent);
    file.close();
}

void StaticCodeAnalyzer::analyzeCode()
{
    if (currentFileContent.isEmpty()) {
        QMessageBox::warning(this, "Error", "No file loaded");
        return;
    }

    // Simple static analysis: Find classes, functions, and variables

    QString result;
    QRegularExpression classExp("\\bclass\\s+\\w+");
    QRegularExpression funcExp("\\b\\w+\\s*\\([^\\)]*\\)\\s*\\{");
    QRegularExpression varExp("\\b\\w+\\s+\\w+;");

    int classCount = currentFileContent.count(classExp);
    int funcCount = currentFileContent.count(funcExp);
    int varCount = currentFileContent.count(varExp);

    result += "Classes Found: " + QString::number(classCount) + "\n";
    result += "Functions Found: " + QString::number(funcCount) + "\n";
    result += "Variables Found: " + QString::number(varCount) + "\n";

    ui->labelResult->setText(result);
}

StaticCodeAnalyzer::~StaticCodeAnalyzer()
{
    delete ui;
}
