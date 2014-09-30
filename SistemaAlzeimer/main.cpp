#include <iostream>
#include "Interface/Telas.h"
#include <QCoreApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Telas *telas = new Telas;

    //telas.Menu();
    telas->teste();

    return 0;
}
