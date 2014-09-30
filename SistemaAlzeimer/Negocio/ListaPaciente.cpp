#include <iostream>
#include <cstdlib>
#include "ListaPaciente.h"

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

int ListaPaciente::deletar(string nome){
    Apontador deletaNo = NULL;
    temp = primeiro;
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome ){
        temp = atual;
        atual = atual->proximo;
    }
    if(atual == NULL){
        return 0;
        delete deletaNo;
    }
    else{
        deletaNo = atual;
        atual = atual->proximo;
        temp->proximo = atual;
        delete deletaNo;
        return 1;
    }
}
int ListaPaciente::alterar(string nome){
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome){
        atual = atual->proximo;
    }
    if(atual == NULL){
        return 0;
    }
    else{
        return 1;
    }
}


void ListaPaciente::imprimir(){
    atual = primeiro;
    while(atual != NULL){
        cout << atual->item->getNome() << endl;
        cout << atual->item->getIdade() << endl;
        cout << atual->item->getContinente() << endl;
        cout << atual->item->getSexo() << endl;
        cout << atual->item->getHistorico() << endl;
        cout << atual->item->getTratamento().getNome() << endl;
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
