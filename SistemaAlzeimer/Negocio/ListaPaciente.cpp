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

void ListaPaciente::deletar(string nome){
    atual = primeiro->proximo;
    temp = primeiro;
    while(atual != NULL && atual->item->getNome() != nome){
        temp = atual;
        atual = atual->proximo;
    }
    temp->proximo = atual->proximo;
    delete temp;
}

int ListaPaciente::alterar(string nome){
    atual = primeiro;
    string nomeP,continente,sexo,histfam,tratamento;
    int idade;
    while(atual != NULL && atual->item->getNome() != nome){
        atual = atual->proximo;
    }
}


void ListaPaciente::imprimir(){
    atual = primeiro;
    if(atual == NULL){
        cout << "Lista Vazia";
    }
    while(atual != NULL){
        cout << "Nome: " << atual->item->getNome() << endl;
        cout << "Idade: " << atual->item->getIdade() << endl;
        cout << "Continente: " << atual->item->getContinente() << endl;
        cout << "Sexo: " << atual->item->getSexo() << endl;
        cout << "Historico: " <<atual->item->getHistorico() << endl;
        cout << "Tratamento: " << atual->item->getTratamento().getNome() << endl;
        cout << endl;
        atual = atual->proximo;
    }
}

void ListaPaciente::consultar(string nome){
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome){
        atual = atual->proximo;
    }
    if(atual == NULL){
        cout << "nao" << endl;
    }
    else{
        cout << "CORINTIA";
        cout << atual->item->getNome() << endl;
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
