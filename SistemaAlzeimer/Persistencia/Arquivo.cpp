#include "Negocio/Lista.h"
#include "Persistencia/Arquivo.h"
#include <iostream>

using namespace std;


void Arquivo::escreverArquivo(Lista *lista){
    ofstream arquivo("/home/igor/SistemaAlzeimer/Pacientes.csv");
    if(!arquivo.is_open()){
        cout << "Arquivo nao foi aberto" << endl;
    }

    arquivo << "Paciente" << (char)59;
    arquivo << "Idade" << (char)59;
    arquivo << "Continente" << (char)59;
    arquivo << "Sexo" << (char)59;
    arquivo << "Historico familiar" << (char)59;
    arquivo << "Tratamento" << (char)13;

    while(lista->primeiro != NULL){
        arquivo << lista->primeiro->item->getNome() << (char)59;
        arquivo << lista->primeiro->item->getIdade() << (char)59;
        arquivo << lista->primeiro->item->getContinente() << (char)59;
        arquivo << lista->primeiro->item->getSexo() << (char)59;
        arquivo << lista->primeiro->item->getHistorico() << (char)59;
        arquivo << lista->primeiro->item->getTratamento().getNome() << (char)13;
        lista->primeiro = lista->primeiro->proximo;
    }

    arquivo.close();
}

Lista *Arquivo::lerArquivo(){

    string paciente1;
    string espaco;
    Lista *lista = new Lista;
    ifstream arquivo("/home/igor/SistemaAlzeimer/Pacientes.csv");
    Tratamento tratamento;
    if(!arquivo.is_open()){
        cout << "arquivo nao foi aberto!\n";
        return NULL;
    }
    string teste;
    getline(arquivo,teste,char(13));
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
        getline(arquivo,paciente1,'\r');
        tratamento.setNome(paciente1.c_str());
        paciente->setTratamento(tratamento);
        lista->inserir(paciente);
    }
    return lista;
}
