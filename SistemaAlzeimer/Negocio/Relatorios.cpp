#include "Relatorios.h"


void Relatorios::relatorioSexo(Lista *lista,float cont){
    int contSexoM = 0;
    int contSexoF = 0;
    float percF,percM;
    lista->atual = lista->primeiro;
    while(lista->atual != NULL){
        if(lista->atual->item->getSexo() == "M"){
            contSexoM ++;
        }else contSexoF++;
        lista->atual = lista->atual->proximo;
    }

    percF = (contSexoF/cont) * 100;
    percM = (contSexoM/cont) * 100;

    cout << "a) quantidade e % de pessoas por sexo:" << endl;
    cout << "Feminino:  " << contSexoF << "  / Porcentagem: " << percF << "%"<< endl;
    cout << "Masculino:  " << contSexoM << "  / Porcentagem: " << percM << "%"<< endl  << endl;
}

void Relatorios::relatorioContinente(Lista *lista,float cont){
    int contContinenteAm = 0;
    int contContinenteAs = 0;
    int contContinenteO = 0;
    int contContinenteAf = 0;
    int contContinenteE = 0;

    float percAm,percAs,percO,percAf,percE;
    lista->atual = lista->primeiro;
    while(lista->atual != NULL){
        if(lista->atual->item->getContinente() == "america"){
            contContinenteAm ++;
        }else if(lista->atual->item->getContinente() == "asia"){
            contContinenteAs ++;
        }else if(lista->atual->item->getContinente() == "oceania"){
            contContinenteO ++;
        }else if(lista->atual->item->getContinente() == "africa"){
            contContinenteAf ++;
        }else if(lista->atual->item->getContinente() == "europa"){
            contContinenteE ++;
        }
        lista->atual = lista->atual->proximo;
    }

    percAm = (contContinenteAm/cont) * 100;
    percAs = (contContinenteAs/cont) * 100;
    percO = (contContinenteO/cont) * 100;
    percAf = (contContinenteAf/cont) * 100;
    percE = (contContinenteE/cont) * 100;


    cout << "b) quantidade e % de pessoas por continente" << endl;
    cout << "America:  " << contContinenteAm << "  / Porcentagem: " << percAm << "%"<< endl;
    cout << "Asia:  " << contContinenteAs << "  / Porcentagem: " << percAs << "%" << endl;
    cout << "Oceania:  " << contContinenteO << "  / Porcentagem: " << percO << "%"<< endl;
    cout << "Africa:  " << contContinenteAf << "  / Porcentagem: " << percAf << "%" << endl;
    cout << "Europa:  " << contContinenteE << "  / Porcentagem: " << percE << "%"<< endl << endl;

}



void Relatorios::relatorioXY(Lista *lista, float cont){
    int contMAm = 0;
    int contFAm = 0;
    int contMAs = 0;
    int contFAs = 0;
    int contMAf = 0;
    int contFAf = 0;
    int contMEu = 0;
    int contFEu = 0;
    int contMO = 0;
    int contFO = 0;
    float percMAm,percFAm,percMAs,percFAs,percMAf,percFAf,percMOc,percFOc,percMEu,percFEu;

    lista->atual = lista->primeiro;
    while(lista->atual != NULL){
        if(lista->atual->item->getContinente() == "america" && lista->atual->item->getSexo() == "M"){
            contMAm ++;
        }else if(lista->atual->item->getContinente() == "america" && lista->atual->item->getSexo() == "F"){
            contFAm ++;
        }else if(lista->atual->item->getContinente() == "asia" && lista->atual->item->getSexo() == "M"){
            contMAs ++;
        }else if(lista->atual->item->getContinente() == "asia" && lista->atual->item->getSexo() == "F"){
            contFAs ++;
        }else if(lista->atual->item->getContinente() == "africa" && lista->atual->item->getSexo() == "M"){
            contMAf ++;
        }else if(lista->atual->item->getContinente() == "africa" && lista->atual->item->getSexo() == "F"){
            contFAf ++;
        }else if(lista->atual->item->getContinente() == "europa" && lista->atual->item->getSexo() == "M"){
            contMEu ++;
        }else if(lista->atual->item->getContinente() == "europa" && lista->atual->item->getSexo() == "F"){
            contFEu ++;
        }else if(lista->atual->item->getContinente() == "oceania" && lista->atual->item->getSexo() == "M"){
            contMO ++;
        }else if(lista->atual->item->getContinente() == "oceania" && lista->atual->item->getSexo() == "F"){
            contFO ++;
        }
        lista->atual = lista->atual->proximo;
    }

    percMAm = (contMAm/cont) * 100;
    percFAm = (contFAm/cont) * 100;
    percMAs = (contMAs/cont) * 100;
    percFAs = (contFAs/cont) * 100;
    percMAf = (contMAf/cont) * 100;
    percFAf = (contFAf/cont) * 100;
    percMOc = (contMO/cont) * 100;
    percFOc = (contFO/cont) * 100;
    percMEu = (contMEu/cont) * 100;
    percFEu = (contFEu/cont) * 100;

    cout << "c) quantidade e % de pessoas do sexo X do continente Y" << endl;
    cout << "Masculino da America:  " << contMAm << " e " << percMAm << "%"<< endl;
    cout << "Masculino da Asia:  " <<  contMAs << " e " << percMAs << "%" << endl;
    cout << "Masculino da Africa:  " <<  contMAf << " e " << percMAf << "%" << endl;
    cout << "Masculino da Oceania:  " <<  contMO << " e " << percMOc << "%" << endl;
    cout << "Masculino da Europa:  " <<  contMEu << " e " << percMEu << "%" << endl;
    cout << "Feminino da America:  " << contFAm <<  " e " << percFAm << "%"<< endl;
    cout << "Feminino da Asia:  " << contFAs << " e " << percFAs << "%"<< endl;
    cout << "Feminino da Africa:  " << contFAf << " e " << percFAf << "%"<< endl;
    cout << "Feminino da Oceania:  " << contFO << " e " << percFOc << "%"<< endl;
    cout << "Feminino da Europa:  " << contFEu << " e " << percFEu << "%"<< endl;
}

void Relatorios::relatorio(Lista *lista){
    float cont;
    cont = lista->contador();
    relatorioSexo(lista,cont);
    relatorioContinente(lista,cont);
    relatorioXY(lista,cont);
}
