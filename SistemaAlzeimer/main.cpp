#include <QCoreApplication>
#include <iostream>
#include "Lista.h"
#include "Paciente.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Lista lista;
    string nome = "igor";
    Paciente *paciente = new Paciente("igor",12,"M","america","Sim","natural");
    lista.inserir(paciente);
    lista.imprimir();
    //lista.deletar(nome);
    string teste;
    if(lista.alterar(nome) == 0){
        cin >> teste;
        paciente->setNome(teste);
    }
    lista.imprimir();
    return a.exec();
}
