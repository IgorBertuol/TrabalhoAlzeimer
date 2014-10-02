#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Telas.h"
#include <QObject>

void Telas::Menu() {
    system("clear");
    cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doença de Alzeheimer").toStdString() << endl;
    cout<< QObject::tr("1. Pacientes" ).toStdString() << endl;
    cout<< QObject::tr("2. Manipulacao de dados" ).toStdString() << endl;
    cout<< QObject::tr("3. Ajustes").toStdString() << endl;
    cout<< QObject::tr("Selecione uma das opcoes: ").toStdString() << endl;
           int op;
    cin >> op;
    switch (op) {
    case 1:
        MenuPaciente();
        break;
    case 2:
        MenuManipulacaoDados();
        break;
    case 3:
        MenuOpcoes();
        break;
    default:
        break;
    }
}

void Telas::MenuPaciente( ){
    system("clear");
    cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
    cout<< QObject::tr("1. Cadastar paciente" ).toStdString() << endl;
    cout<< QObject::tr("2. Alterar paciente" ).toStdString() << endl;
    cout<< QObject::tr("3. Excluir paciente" ).toStdString() << endl;
    cout<< QObject::tr("4. Consultar paciente" ).toStdString() << endl;
    cout<< QObject::tr("5. Mostrar pacientes cadastrados" ).toStdString() << endl;
    cout<< QObject::tr("6. Voltar" ).toStdString() << endl;
    cout<< QObject::tr("Selecione uma das opcoes: " ).toStdString() << endl;
    int op;
    cin >> op;
    switch (op) {
    case 1:
        system("clear");
        cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
        cout<< QObject::tr( "Cadastro de pacientes" ).toStdString() << endl;
        excecoes.ExcecoesCadastrarPaciente(lista);
        MenuPaciente();
        break;
    case 2:
        system("clear");
        cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
        cout<< QObject::tr( "Cadastro de pacientes" ).toStdString() << endl;
        excecoes.ExcecoesAlterarPaciente(lista);
        MenuPaciente();
        break;
    case 3:
        system("clear");
        cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
        cout<< QObject::tr( "Cadastro de pacientes" ).toStdString() << endl;
        excecoes.ExcecoesExcluirPaciente(lista);
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 4:
        system("clear");
        cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;

        cout<< QObject::tr( "Cadastro de pacientes" ).toStdString() << endl;
        excecoes.ExcecoesConsultarPaciente(lista);
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 5:
        system("clear");
        cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
        cout<< QObject::tr( "Pacientes cadastrados: " ).toStdString() << endl;
        lista->imprimir();
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 6:
        Menu();
        break;
    default:
        break;
    }
}


void Telas::MenuManipulacaoDados( ){
    system("clear");
    cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
    cout<< QObject::tr("1. Geracao de dados estatisticos" ).toStdString() << endl;
    cout<< QObject::tr("2. Geracao de relatorios" ).toStdString() << endl;
    cout<< QObject::tr("3. Filtro de dados" ).toStdString() << endl;
    cout<< QObject::tr("4. Voltar" ).toStdString() << endl;
    cout<< QObject::tr("Selecione uma das opcoes: ").toStdString()<<endl;
           int op;
    cin >> op;
    switch (op) {
    case 1:

        break;
    case 2:
        system("clear");
        cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
        cout<< QObject::tr( "Geração de relatórios " ).toStdString() << endl;
        //relatorio.relatorioContinente();
        getchar();
        getchar();
        MenuManipulacaoDados();
        break;
    case 3:

        break;
    case 4:
        Menu();
        break;
    default:
        break;
    }
}


void Telas::MenuOpcoes() {
    system("clear");
    cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
    cout<< QObject::tr("1. Importar CSV   " ).toStdString() << endl;
    cout<< QObject::tr("2. Mudar idioma  " ).toStdString() << endl;
    cout<< QObject::tr("3. Voltar").toStdString() << endl;
    cout<< QObject::tr("Selecione uma das opcoes: ").toStdString() << endl;
    int op;
    cin >> op;
    switch (op) {
    case 1:

        break;
    case 2:
        system("clear");
        cout<< QObject::tr( "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" ).toStdString() << endl;
        cout<< QObject::tr( "Geração de relatórios " ).toStdString() << endl;
        //relatorio.relatorio(lista);
        getchar();
        getchar();
        MenuManipulacaoDados();
        break;
    case 3:
        Menu();
        break;
    default:
        break;
    }
}

void Telas::Teste(){
    int intervalo;
    cout<< QObject::tr( "Digite o intervalo desejado: ").toStdString() << endl;
    cin >> intervalo;



}
