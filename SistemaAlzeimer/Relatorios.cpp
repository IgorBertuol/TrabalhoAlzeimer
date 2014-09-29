#include "Relatorios.h"


void Relatorios::relatorioSexo(Lista *lista,float cont){
    int contSexoM = 0;
    int contSexoF = 0;
    float percF,percM;

    while(lista->primeiro != NULL){
        if(lista->primeiro->item->getSexo() == "M"){
            contSexoM ++;
        }else contSexoF++;
        lista->primeiro = lista->primeiro->proximo;
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

    while(lista->primeiro != NULL){
        cout <<  "oi" << endl;
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



void Relatorios::relatorioXY(Lista *lista){
    int contXY;


    cout << "c) quantidade e % de pessoas do sexo X do continente Y" << endl;
    cout << "Masculino:  " << 0 << "  / America: " << 0 << "%"<< endl;
    cout << "Masculino:  " <<  0<< "  / Asia: " << 0 << "%" << endl;
    cout << "Masculino:  " << 0 << "  / Oceania: " << 0 << "%"<< endl;
    cout << "Masculino:  " <<  0<< "  / Africa: " <<  0<< "%" << endl;
    cout << "Masculino:  " <<  0<< "  / Europa: " <<  0<< "%"<< endl;
    cout << "Feminino:  " <<  0<< "  / America: " <<0  << "%"<< endl;
    cout << "Feminino:  " <<  0<< "  / Asia: " << 0 << "%" << endl;
    cout << "Feminino:  " <<  0<< "  / Oceania: " <<0  << "%"<< endl;
    cout << "Feminino:  " <<  0<< "  / Africa: " <<  0<< "%" << endl;
    cout << "Feminino:  " <<  0<< "  / Europa: " <<0  << "%"<< endl;
}

void Relatorios::relatorio(Lista *lista){
    float cont;
    cont = lista->contador();
    relatorioSexo(lista,cont);
    relatorioContinente(lista,cont);
    relatorioXY(lista);
}
