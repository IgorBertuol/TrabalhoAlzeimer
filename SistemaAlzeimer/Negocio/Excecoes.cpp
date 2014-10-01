#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Negocio/Excecoes.h"

void Excecoes::ExcecoesCadastrarPaciente(ListaPaciente *lista){
    string nome,continente,sexo,histfam,tratamento;
    int idade;

    cout << "Nome: ";
    while(cin >>  nome && nome < "0"){
           cout << "Nome Invalido! Digite novamente: ";
}

    cout << endl << "Idade: ";
    while(cin >>  idade && idade < 1){
           cout << "Idade Invalida! Digite novamente: ";
    }

    cout << endl << "Continente (america, europa, asia, africa e oceania): ";
  while( cin >> continente  && continente != "america" && continente != "europa" && continente != "asia" && continente != "africa" && continente != "oceania" ){
        cout << "Continente Invalido! Digite novamente: ";
    }

    cout << endl  << "Sexo (M/F): ";
    while(cin >>  sexo && sexo != "F" && sexo != "M"){
           cout << "Sexo Invalido! Digite novamente: ";
    }

    cout << endl  << "Historico familiar (S/N): ";
    while(cin >>  histfam && histfam != "S" && histfam != "N"){
           cout << "Historico familiar Invalido! Digite novamente: ";
    }

    cout << endl << "Tratamento: ";
    cin >>  tratamento;
    Tratamento trata;
    trata.setNome(tratamento);
    Paciente *paciente = new Paciente(nome,idade,continente,sexo,histfam,trata);
    lista->inserir(paciente);
}

void Excecoes::ExcecoesAlterarPaciente(ListaPaciente *lista){
    string nome;
    cin >> nome;
    if (lista->alterar(nome) == 1)
        cout <<lista->primeiro->item->getNome();
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

