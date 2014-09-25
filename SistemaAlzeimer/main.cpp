#include <QCoreApplication>
#include <iostream>
#include "Lista.h"
#include "Paciente.h"
#include "Arquivo.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Lista *lista;
    Arquivo arquivo;
    string nome = "igor";
    //Paciente *paciente = new Paciente("igor",12,"M","america","Sim","natural");
    lista = arquivo.lerArquivo();
    //lista.inserir(paciente);
    lista->imprimir();
    return a.exec();
}
