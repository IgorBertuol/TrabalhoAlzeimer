#include <QCoreApplication>
#include <iostream>
#include "Lista.h"
#include "Paciente.h"
#include "Arquivo.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Lista *lista= new Lista;
    Arquivo arquivo;
    string nome = "igor";
    Paciente *paciente = new Paciente("igor",12,"M","america","Sim","natural");
    Paciente *paciente1 = new Paciente("igor",20,"M","america","Sim","natural");
    Paciente *paciente2 = new Paciente("igor",40,"M","america","Sim","natural");
    lista->inserir(paciente);
    lista->inserir(paciente1);
    lista->inserir(paciente2);

    arquivo.escreverArquivo(lista);
    lista = arquivo.lerArquivo();
    lista->imprimir();
    return a.exec();
}
