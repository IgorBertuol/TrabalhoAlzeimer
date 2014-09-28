#include "Relatorios.h"


void Relatorios::RelatorioSexo(Lista *lista, int cont){
    int contSexoM = 0;
    int contSexoF = 0;
    int totalPaciente;
    double percF,percM;
    while(lista->primeiro != NULL){
        if(lista->primeiro->item->getSexo() == "M"){
            contSexoM ++;
        }else contSexoF++;
        lista->primeiro = lista->primeiro->proximo;
    }

    percF = (contSexoF/cont) * 100;
    percM = (contSexoM/cont) * 100;

    cout << "QuantidadeF:  " << contSexoF << "PeF: " << percF;
    cout << "QuantidadeM:  " << contSexoM << "PeM: " << percM;
}

void Relatorios::RelatorioContinente(Lista *lista){
    int contContinenteAm = 0;
    int contContinenteAs = 0;
    int contContinenteO = 0;
    int contContinenteAf = 0;
    int contContinenteE = 0;

    while(lista->primeiro != NULL){
        if(lista->primeiro->item->getContinente() == "america"){
            contContinenteAm ++;
        }else if(lista->primeiro->item->getContinente() == "asia"){
            contContinenteAs ++;
        }else if(lista->primeiro->item->getContinente() == "oceania"){
            contContinenteO ++;
        }else if(lista->primeiro->item->getContinente() == "africa"){
            contContinenteAf ++;
        }else if(lista->primeiro->item->getContinente() == "europa"){
            contContinenteE ++;
        }
        lista->primeiro = lista->primeiro->proximo;
    }

}

void Relatorios::RelatorioXY(Lista *lista){
    int contXY;
}
