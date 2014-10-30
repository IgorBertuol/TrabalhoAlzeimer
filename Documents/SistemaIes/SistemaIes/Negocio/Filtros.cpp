#include "Filtros.h"
#include <qobject.h>


void Filtro::imprimeItem(Paciente *paciente){
    cout << "Paciente: " << paciente->getNome() << endl;
    cout << "Idade: "<< paciente->getIdade() << endl;
    cout << "Continente: "<< paciente->getContinente() << endl;
    cout << "Sexo: "<< paciente->getSexo() << endl;
    cout << "Historico: "<< paciente->getHistorico() << endl;
    cout << "Tratamento: "<< paciente->getTratamento().getNome() << endl;
}


void Filtro::filtroDados(ListaPaciente* lista){
    string continente,sexo,histfam,maiorMenor;
    int idade;
    cout<< QObject::tr("Continente (america, europa, asia, africa e oceania): ").toStdString();;
    while( cin >> continente  && continente != "america" && continente != "europa" && continente != "asia" && continente != "africa" && continente != "oceania" ){
        cout<< QObject::tr( "Continente Invalido! Digite novamente: ").toStdString();;
    }
    cout<< QObject::tr("Idade: ").toStdString();;
    while(cin >>  idade && idade < 1){
        cout<< QObject::tr( "Idade Invalida! Digite novamente: ").toStdString();
    }
    cout << "Filtrar acima ou abaixo da idade? (maior/menor): ";
    cin >> maiorMenor;
    cout<< QObject::tr("Sexo (M/F): ").toStdString();;
    while(cin >>  sexo && sexo != "F" && sexo != "M"){
        cout<< QObject::tr( "Sexo Invalido! Digite novamente: ").toStdString();;
    }
    cout<< QObject::tr("Historico familiar (S/N): ").toStdString();;
    while(cin >>  histfam && histfam != "S" && histfam != "N"){
        cout<< QObject::tr( "Historico familiar Invalido! Digite novamente: ").toStdString();;
    }
    lista->atual = lista->primeiro;
    while(lista->atual != NULL){
        if(continente == lista->atual->item->getContinente()){
            if(sexo == lista->atual->item->getSexo()){
                if(histfam == lista->atual->item->getHistorico()){
                    if(maiorMenor == "menor"){
                        if( lista->atual->item->getIdade() < idade){
                            imprimeItem(lista->atual->item);
                        }
                    }else{
                        if(lista->atual->item->getIdade() > idade){
                            imprimeItem(lista->atual->item);
                        }
                    }
                }
            }
        }
        lista->atual = lista->atual->proximo;
    }
}


