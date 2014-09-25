#include "Lista.h"
#include "Arquivo.h"
#include <iostream>

using namespace std;

void Arquivo::escreverArquivo(Lista* lista){
    Paciente *paciente;
    ofstream arquivo("/home/igor/SistemaAlzeimer/Pacientes.csv");
    if(!arquivo.is_open()){
        cout << "Arquivo nao foi aberto" << endl;
    }
    while(lista->primeiro != NULL){
        arquivo << paciente->getNome() << (char)59;
        arquivo << paciente->getIdade() << (char)59;
        arquivo << paciente->getContinente() << (char)59;
        arquivo << paciente->getSexo() << (char)59;
        arquivo << paciente->getHistorico() << (char)59;
        arquivo << paciente->getTratamento() << (char)13;
        lista->primeiro = lista->primeiro->proximo;
    }

    arquivo.close();
}


Lista *Arquivo::lerArquivo(){

    string paciente1;
    Lista *lista = new Lista;
    ifstream arquivo("/home/igor/SistemaAlzeimer/Pacientes.csv");

    if(!arquivo.is_open()){
        cout << "arquivo nao foi aberto!\n";
        return NULL;
    }
    getline(arquivo,paciente1);
    while(!arquivo.eof()){
        Paciente *paciente = new Paciente;

        getline(arquivo,paciente1,';');
        paciente->setNome(paciente1.c_str());
        getline(arquivo,paciente1,';');
        paciente->setIdade(atoi(paciente1.c_str()));
        getline(arquivo,paciente1,';');
        paciente->setContinente(paciente1.c_str());
        getline(arquivo,paciente1,';');
        paciente->setSexo(paciente1.c_str());
        getline(arquivo,paciente1,';');
        paciente->setHistorico(paciente1.c_str());
        getline(arquivo,paciente1);
        paciente->setTratamento(paciente1.c_str());

        lista->inserir(paciente);
    }
    return lista;
    arquivo.close();
}
