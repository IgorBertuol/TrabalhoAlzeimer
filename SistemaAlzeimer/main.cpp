#include <iostream>
#include "Interface/Telas.h"
#include <QCoreApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Telas *telas = new Telas;
    telas->teste();
    telas->menu();


    return 0;
}
