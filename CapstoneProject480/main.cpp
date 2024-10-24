#include "staticcodeanalyzer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StaticCodeAnalyzer w;
    w.show();
    return a.exec();
}
