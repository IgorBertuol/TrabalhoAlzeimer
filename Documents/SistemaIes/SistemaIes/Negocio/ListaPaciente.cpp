#include <iostream>
#include <cstdlib>
#include "ListaPaciente.h"
#include <QObject>

using namespace std;


ListaPaciente::ListaPaciente(){
    primeiro = NULL;
    atual = NULL;
    temp = NULL;
}

void ListaPaciente::inserir(Paciente* paciente){

    if(paciente->getNome() != ""){
        Apontador n = new No;
        n->proximo = NULL;
        n->item = paciente;

        if(primeiro != NULL){
            atual = primeiro;
            while(atual->proximo != NULL){
                atual = atual->proximo;
            }
            atual->proximo = n;
        }else{
            primeiro = n;
        }
    }
}

void ListaPaciente::deletar(string nome){
    temp = primeiro;

    while(temp != NULL && temp->item->getNome() != nome){
        atual = temp;
        temp = temp->proximo;
    }

    if(temp != NULL && temp->item->getNome() == nome){
        if(temp == primeiro){
            this->primeiro = NULL;
            delete temp;
        }
        else if(atual != NULL){
            atual->proximo = temp->proximo;
            delete temp;
        }
    }
}

int ListaPaciente::alterar(string nome,Paciente *paciente){
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome){
        atual = atual->proximo;
    }
    if(atual->item->getNome() == nome){
        Paciente *anterior = atual->item;
        atual->item = paciente;
        delete anterior;
    }
    return 0;
}


void ListaPaciente::imprimir(){
    atual = primeiro;
    if(atual == NULL){
        cout << "Lista Vazia" << endl;
    }
    while(atual != NULL){
        cout << endl;
        cout << "Nome: " << atual->item->getNome() << endl;
        cout << "Idade: " << atual->item->getIdade() << endl;
        cout << "Continente: " << atual->item->getContinente() << endl;
        cout << "Sexo: " << atual->item->getSexo() << endl;
        cout << "Historico: " <<atual->item->getHistorico() << endl;
        cout << "Tratamento: " << atual->item->getTratamento().getNome() << endl;
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        atual = atual->proximo;
    }
}

void ListaPaciente::consultar(string nome){
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome){
        atual = atual->proximo;
    }
    if(atual == NULL){
        cout << endl;
        cout << "Paciente nao encontrado." << endl;
    }
    else{
        cout << endl;
        cout << "Nome: " << atual->item->getNome() << endl;
        cout << "Idade: " << atual->item->getIdade() << endl;
        cout << "Continente: " << atual->item->getContinente() << endl;
        cout << "Sexo: " << atual->item->getSexo() << endl;
        cout << "Historico: " <<atual->item->getHistorico() << endl;
        cout << "Tratamento: " << atual->item->getTratamento().getNome() << endl;
        cout << endl;
    }
}

float ListaPaciente::contador(){
    float cont = 0;
    atual = primeiro;
    while(atual != NULL){
        cont ++;
        atual = atual->proximo;
    }

    return cont;
}
