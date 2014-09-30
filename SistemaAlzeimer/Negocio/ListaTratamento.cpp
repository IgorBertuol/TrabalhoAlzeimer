#include "ListaTratamento.h"


using namespace std;


ListaTratamento::ListaTratamento(){
    primeiro = NULL;
    atual = NULL;
    temp = NULL;
}


void ListaTratamento::inserirTratamento(Tratamento* tratamento){
    Apontador n = new No;
    n->proximo = NULL;
    n->item = tratamento;

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

int ListaTratamento::deletarTratamento(string nome){
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

void ListaTratamento::consultarTratamento(string nome){
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome){
        atual = atual->proximo;
    }
    if(atual == NULL){
        cout << "nao" << endl;
    }
    else{
        cout << atual->item->getNome() << endl;
    }
}
