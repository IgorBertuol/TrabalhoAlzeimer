#include <iostream>
#include "Interface/Telas.h"
#include <QCoreApplication>
#include <QTranslator>
#include <QObject>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Telas *telas = new Telas;
    int op;
    cout << "1 - Ingles" << endl;
    cout << "2 - Portuguese" << endl;
    cout << "Option :" << endl;

    cin >> op;

    if(op == 1){
        QTranslator appTranslator;
        appTranslator.load("traducoes/sistemaAlzeimer_en.qm");
        a.installTranslator(&appTranslator);
        telas->Menu();
    }
    //telas->teste();
    telas->Menu();


    return a.exec();
}
