#include "ListaTratamento.h"


using namespace std;


ListaTratamento::ListaTratamento(){
    primeiro = NULL;
    atual = NULL;
    temp = NULL;
}


void ListaTratamento::inserirTratamento(Tratamento *tratamento){
      if(tratamento->getNome() != ""){
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
}

void ListaTratamento::deletarTratamento(string nome){
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

int ListaTratamento::alterar(string nome,Tratamento *tratamento){
    atual = primeiro;
    while(atual != NULL && atual->item->getNome() != nome){
        atual = atual->proximo;
    }
    if(atual->item->getNome() == nome){
        Tratamento *anterior = atual->item;
        atual->item = tratamento;
        delete anterior;
    }
    return 0;
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


