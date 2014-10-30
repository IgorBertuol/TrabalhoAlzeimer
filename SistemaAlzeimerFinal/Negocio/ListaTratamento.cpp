#include "ListaTratamento.h"


using namespace std;


ListaTratamento::ListaTratamento(){
    primeiro = NULL;
    atual = NULL;
    temp = NULL;
}


void ListaTratamento::inserirTratamento(Tratamento *tratamento){
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

void ListaTratamento::deletarTratamento(string nome){
    temp = primeiro;
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome ){
        temp = atual;
        atual = atual->proximo;
    }
    if(atual == NULL){
        cout << "Nao foi encontrado" << endl;
    }
    else{
        temp->proximo = atual->proximo;
        delete atual;
        cout << "Deletado" << endl;
    }
}

int ListaTratamento::verificarTratamento(string nome){
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

void ListaTratamento::imprimirTratamento(){
    atual = primeiro;
    if(atual == NULL){
        cout << "Lista Vazia";
    }
    while(atual != NULL){
        cout << "Codigo: " << atual->item->getCodigo() << endl;
        cout << "Nome do tratamento: " << atual->item->getNome() << endl;
        cout << endl;
        atual = atual->proximo;
    }
}


