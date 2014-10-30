#include "Relatorios.h"
#include <QObject>


void Relatorios::relatorioSexo(ListaPaciente *lista,float cont){
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

    cout<< QObject::tr( "a) quantidade e % de pessoas por sexo:").toStdString() << endl << endl ;
    cout<< QObject::tr( "Feminino:  ").toStdString() << contSexoF << "  / Porcentagem: " << percF << "%"<< endl;
    cout<< QObject::tr( "Masculino:  ").toStdString() << contSexoM << "  / Porcentagem: " << percM << "%"<< endl  << endl;
}

void Relatorios::relatorioContinente(ListaPaciente *lista,float cont){
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


    cout<< QObject::tr( "b) quantidade e % de pessoas por continente").toStdString() << endl << endl ;
    cout<< QObject::tr( "America:  ").toStdString() << contContinenteAm << "  / Porcentagem: " << percAm << "%"<< endl;
    cout<< QObject::tr( "Asia:  ").toStdString() << contContinenteAs << "  / Porcentagem: " << percAs << "%" << endl;
    cout<< QObject::tr( "Oceania:  ").toStdString() << contContinenteO << "  / Porcentagem: " << percO << "%"<< endl;
    cout<< QObject::tr( "Africa:  ").toStdString() << contContinenteAf << "  / Porcentagem: " << percAf << "%" << endl;
    cout<< QObject::tr( "Europa:  ").toStdString() << contContinenteE << "  / Porcentagem: " << percE << "%"<< endl << endl;

}



void Relatorios::relatorioXY(ListaPaciente *lista, float cont){
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

    cout<< QObject::tr( "c) quantidade e % de pessoas do sexo X do continente Y").toStdString() << endl << endl ;
    cout<< QObject::tr( "Masculino da America:  ").toStdString() << contMAm << " e " << percMAm << "%"<< endl;
    cout<< QObject::tr( "Masculino da Asia:  ").toStdString() <<  contMAs << " e " << percMAs << "%" << endl;
    cout<< QObject::tr( "Masculino da Africa:  ").toStdString() <<  contMAf << " e " << percMAf << "%" << endl;
    cout<< QObject::tr( "Masculino da Oceania:  ").toStdString() <<  contMO << " e " << percMOc << "%" << endl;
    cout<< QObject::tr( "Masculino da Europa:  ").toStdString() <<  contMEu << " e " << percMEu << "%" << endl;
    cout<< QObject::tr( "Feminino da America:  ").toStdString() << contFAm <<  " e " << percFAm << "%"<< endl;
    cout<< QObject::tr( "Feminino da Asia:  ").toStdString() << contFAs << " e " << percFAs << "%"<< endl;
    cout<< QObject::tr( "Feminino da Africa:  ").toStdString() << contFAf << " e " << percFAf << "%"<< endl;
    cout<< QObject::tr( "Feminino da Oceania:  ").toStdString() << contFO << " e " << percFOc << "%"<< endl;
    cout<< QObject::tr( "Feminino da Europa:  ").toStdString() << contFEu << " e " << percFEu << "%"<< endl;
}

void Relatorios::relatorio(ListaPaciente *lista){
    int cont = lista->contador();

    cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
    relatorioContinente(lista,cont);
    cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
    relatorioSexo(lista,cont);
    cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
    relatorioXY(lista,cont);
    cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;

}



