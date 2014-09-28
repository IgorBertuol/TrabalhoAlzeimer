#include <iostream>
#include <cstdlib>
#include "Lista.h"

using namespace std;


Lista::Lista(){
    primeiro = NULL;
    atual = NULL;
    temp = NULL;
}

void Lista::inserir(Paciente* paciente){
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

void Lista::deletar(string nome){
    Apontador deletaNo = NULL;
    temp = primeiro;
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome ){
        temp = atual;
        atual = atual->proximo;
    }
    if(atual == NULL){
        cout << "Paciente nao encontrado !" << endl;
        delete deletaNo;
    }
    else{
        deletaNo = atual;
        atual = atual->proximo;
        temp->proximo = atual;
        delete deletaNo;
        cout << "O paciente " << nome << " foi deletado" << endl;
    }
}
int Lista::alterar(string nome){
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome){
        atual = atual->proximo;
    }
    if(atual == NULL){
        return 1;
    }
    else{
        return 0;
    }
}


void Lista::imprimir(){
    atual = primeiro;
    while(atual != NULL){
        cout << atual->item->getNome() << endl;
        cout << atual->item->getIdade() << endl;
        cout << atual->item->getContinente() << endl;
        cout << atual->item->getSexo() << endl;
        cout << atual->item->getHistorico() << endl;
        cout << atual->item->getTratamento() << endl;
        //cout << atual->item->getTratamento().getTratamento() << endl;
        cout << endl;
        atual = atual->proximo;
    }
}

void Lista::consultar(string nome){
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

int Lista::contador(){
    int cont = 0;
    atual = primeiro;
    while(atual != NULL){
        cont ++;
        atual = atual->proximo;
    }

    return cont;
}
