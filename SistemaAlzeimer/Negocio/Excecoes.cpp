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
    Tratamento trataa;
    trataa.setNome(tratamento);
    Paciente *paciente = new Paciente(nome,idade,continente,sexo,histfam,trataa);
    lista->inserir(paciente);
}

void Excecoes::ExcecoesAlterarPaciente(ListaPaciente *lista){
    string nome;
    cin >> nome;
    lista->alterar(nome);
}

void Excecoes::ExcecoesExcluirPaciente(ListaPaciente *lista){
    string nome;
    cin >> nome;
    lista->deletar(nome);

}

void Excecoes::ExcecoesConsultarPaciente(ListaPaciente *lista){
    string nome;
    cin >> nome;
    lista->consultar(nome);
}

