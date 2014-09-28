#include <QCoreApplication>
#include <iostream>
#include "Lista.h"
#include "Paciente.h"
#include "Arquivo.h"
#include "Relatorios.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Lista *lista= new Lista;
    Arquivo arquivo;
    Relatorios relatorio;
    int cont;
    string nome = "igor";
    Paciente *paciente = new Paciente("igor",12,"america","M","Sim","natural");
    Paciente *paciente1 = new Paciente("igor",20,"europa","F","Sim","natural");
    Paciente *paciente2 = new Paciente("igor",40,"asia","M","Sim","natural");
    Paciente *paciente3 = new Paciente("igor",40,"europa","M","Sim","natural");
    lista->inserir(paciente);
    lista->inserir(paciente1);
    lista->inserir(paciente2);
    lista->inserir(paciente3);
    lista->imprimir();
    cont = lista->contador();
    //relatorio.RelatorioContinente(lista);
    relatorio.RelatorioSexo(lista,cont);
    //cout << lista->contador()<<endl;
    //arquivo.escreverArquivo(lista);
    //lista = arquivo.lerArquivo();
    //lista->imprimir();
    return a.exec();
}
