#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Excecoes.h"
#include <QObject>

void Excecoes::ExcecoesCadastrarPaciente(ListaPaciente *lista){
    string nome,continente,sexo,histfam,tratamento;
    int idade;

    cout<< QObject::tr( "Nome: ").toStdString();
    while(cin >>  nome && nome < "0"){
        cout<< QObject::tr( "Nome Invalido! Digite novamente: ").toStdString();
    }

    cout<< QObject::tr("Idade: ").toStdString();;
    while(cin >>  idade && idade < 1){
        cout<< QObject::tr( "Idade Invalida! Digite novamente: ").toStdString();
    }

    cout<< QObject::tr("Continente (america, europa, asia, africa e oceania): ").toStdString();;
    while( cin >> continente  && continente != "america" && continente != "europa" && continente != "asia" && continente != "africa" && continente != "oceania" ){
        cout<< QObject::tr( "Continente Invalido! Digite novamente: ").toStdString();;
    }

    cout<< QObject::tr("Sexo (M/F): ").toStdString();;
    while(cin >>  sexo && sexo != "F" && sexo != "M"){
        cout<< QObject::tr( "Sexo Invalido! Digite novamente: ").toStdString();;
    }

    cout<< QObject::tr("Historico familiar (S/N): ").toStdString();;
    while(cin >>  histfam && histfam != "S" && histfam != "N"){
        cout<< QObject::tr( "Historico familiar Invalido! Digite novamente: ").toStdString();;
    }

    cout<< QObject::tr("Tratamento: ").toStdString();
    cin >>  tratamento;
    Tratamento *trataa = new Tratamento;
    trataa->setNome(tratamento);
    Paciente *paciente = new Paciente(nome,idade,continente,sexo,histfam,trataa);
    lista->inserir(paciente);
}

void Excecoes::ExcecoesAlterarPaciente(ListaPaciente *lista){
    string nomep;
    cout << QObject::tr( "Digite o nome do paciente a ser alterado: ").toStdString();
    cin >> nomep;
    string nome,continente,sexo,histfam,tratamento;
    int idade;

    cout<< QObject::tr( "Nome: ").toStdString();
    while(cin >>  nome && nome < "0"){
        cout<< QObject::tr( "Nome Invalido! Digite novamente: ").toStdString();
    }

    cout<< QObject::tr("Idade: ").toStdString();;
    while(cin >>  idade && idade < 1){
        cout<< QObject::tr( "Idade Invalida! Digite novamente: ").toStdString();
    }

    cout<< QObject::tr("Continente (america, europa, asia, africa e oceania): ").toStdString();;
    while( cin >> continente  && continente != "america" && continente != "europa" && continente != "asia" && continente != "africa" && continente != "oceania" ){
        cout<< QObject::tr( "Continente Invalido! Digite novamente: ").toStdString();;
    }

    cout<< QObject::tr("Sexo (M/F): ").toStdString();;
    while(cin >>  sexo && sexo != "F" && sexo != "M"){
        cout<< QObject::tr( "Sexo Invalido! Digite novamente: ").toStdString();;
    }

    cout<< QObject::tr("Historico familiar (S/N): ").toStdString();;
    while(cin >>  histfam && histfam != "S" && histfam != "N"){
        cout<< QObject::tr( "Historico familiar Invalido! Digite novamente: ").toStdString();;
    }

    cout<< QObject::tr("Tratamento: ").toStdString();
    cin >>  tratamento;
    Tratamento *trataa = new Tratamento;
    trataa->setNome(tratamento);
    Paciente *paciente = new Paciente(nome,idade,continente,sexo,histfam,trataa);
    lista->alterar(nomep,paciente);
}

void Excecoes::ExcecoesExcluirPaciente(ListaPaciente *lista){
    string nome;
    cout <<QObject::tr( "Digite o nome do paciente a ser excluido: ").toStdString();
    cin >> nome;
    lista->deletar(nome);

}

void Excecoes::ExcecoesConsultarPaciente(ListaPaciente *lista){
    string nome;
    cout <<QObject::tr( "Digite o nome do paciente a ser consultado: ").toStdString();
    cin >> nome;
    lista->consultar(nome);
}

void Excecoes::ExcecoeesCadastrarTratamento(ListaTratamento *tratamento){
    string nome;
    int cod;
    cout<< QObject::tr("Codigo: ").toStdString();;
    while(cin >>  cod && cod < 1){
        cout<< QObject::tr( "Codigo Invalida! Digite novamente: ").toStdString();
    }
    cout<< QObject::tr( "Nome: ").toStdString();
    while(cin >>  nome && nome < "0"){
        cout<< QObject::tr( "Nome Invalido! Digite novamente: ").toStdString();
    }

    Tratamento *trata = new Tratamento(cod,nome);
    tratamento->inserirTratamento(trata);

}

void Excecoes::ExcecoeesAlterarTratamento(ListaTratamento *tratamento){
    string nomep;
    int cod;
    cout <<QObject::tr( "Digite o nome do paciente a ser alterado: ").toStdString();
    cin >> nomep;
    string nome;

    cout<< QObject::tr("Codigo: ").toStdString();;
    while(cin >>  cod && cod < 1){
        cout<< QObject::tr( "Codigo Invalida! Digite novamente: ").toStdString();
    }
    cout<< QObject::tr( "Nome: ").toStdString();
    while(cin >>  nome && nome < "0"){
        cout<< QObject::tr( "Nome Invalido! Digite novamente: ").toStdString();
    }

    Tratamento *trata = new Tratamento(cod,nome);
    tratamento->alterar(nomep,trata);


}

void Excecoes::ExcecoeesExcluirTratamento(ListaTratamento *tratamento){
    string nome;
    cout <<QObject::tr( "Digite o nome do paciente a ser excluido: ").toStdString();
    cin >> nome;
    tratamento->deletarTratamento(nome);

}

void Excecoes::ExcecoeesConsultarTratamento(ListaTratamento *tratamento){

}

