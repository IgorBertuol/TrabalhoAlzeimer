#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Telas.h"
#include <QObject>




void Telas::Menu() {
    int op;
    lista = arquivo.lerArquivoP();
    listaT = arquivo.lerArquivoT();
    system("cls");
    cout<< QObject::tr("____________________________________________________").toStdString() << endl;
    cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
    cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
    cout<< QObject::tr("1. Pacientes" ).toStdString() << endl;
    cout<< QObject::tr("2. Tratamento" ).toStdString() << endl;
    cout<< QObject::tr("2. Manipulacao de dados" ).toStdString() << endl;
    cout<< QObject::tr("3. Salvar arquivo").toStdString() << endl << endl;
    cout<< QObject::tr("____________________________________________________").toStdString() << endl;
    cout<< QObject::tr("Selecione uma das opcoes: ").toStdString();
    cin >> op;
    switch (op) {
    case 1:
        MenuPaciente();
        break;
    case 2:
        MenuTratamento();
        break;
    case 3:
        MenuManipulacaoDados();
        break;
    case 4:
        arquivo.escreverArquivoP(lista);
        arquivo.escreverArquivoT(listaT);
        Menu();
        break;
    default:
        getchar();
        Menu();
        break;
    }
}

void Telas::MenuPaciente( ){
    system("cls");
    cout<< QObject::tr("____________________________________________________").toStdString() << endl;
    cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
    cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
    cout<< QObject::tr("1. Cadastar paciente" ).toStdString() << endl;
    cout<< QObject::tr("2. Alterar paciente" ).toStdString() << endl;
    cout<< QObject::tr("3. Excluir paciente" ).toStdString() << endl;
    cout<< QObject::tr("4. Consultar paciente" ).toStdString() << endl;
    cout<< QObject::tr("5. Mostrar pacientes cadastrados" ).toStdString() << endl;
    cout<< QObject::tr("6. Voltar" ).toStdString() << endl << endl;
    cout<< QObject::tr("____________________________________________________").toStdString() << endl;
    cout<< QObject::tr("Selecione uma das opcoes: " ).toStdString();


    int op;
    cin >> op;
    switch (op) {
    case 1:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doença de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tCadastro de pacientes" ).toStdString() << endl;
        cout << endl;
        excecoes.ExcecoesCadastrarPaciente(lista);
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 2:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doença de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tAlterar pacientes" ).toStdString() << endl;
        cout << endl;
        excecoes.ExcecoesAlterarPaciente(lista);
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 3:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tExcluir pacientes" ).toStdString() << endl;
        cout << endl;

        excecoes.ExcecoesExcluirPaciente(lista);
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 4:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tConsultar pacientes" ).toStdString() << endl;
        cout << endl;
        excecoes.ExcecoesConsultarPaciente(lista);
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 5:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tPacientes cadastrados: " ).toStdString() << endl;
        cout << endl;
        lista->imprimir();
        cout << endl;
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 6:
        Menu();
        break;
    default:
        getchar();
        MenuPaciente();
        break;
    }
}

void Telas::MenuManipulacaoDados( ){
    system("cls");
    cout<< QObject::tr("____________________________________________________").toStdString() << endl;
    cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
    cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
    cout<< QObject::tr("1. Geracao de dados estatisticos" ).toStdString() << endl;
    cout<< QObject::tr("2. Geracao de relatorios" ).toStdString() << endl;
    cout<< QObject::tr("3. Filtro de dados" ).toStdString() << endl;
    cout<< QObject::tr("4. Voltar" ).toStdString() << endl << endl ;
    cout<< QObject::tr("____________________________________________________").toStdString() << endl;
    cout<< QObject::tr("Selecione uma das opcoes: ").toStdString();
           int op;
    cin >> op;
    switch (op) {
    case 1:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tGeracaoo de dados estatisticos " ).toStdString() << endl << endl;
        int cont;
        cont = lista->contador();
        relatorio.tabela(lista,cont);
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        getchar();
        getchar();
        MenuManipulacaoDados();
        break;
    case 2:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tGeracao de relatorios " ).toStdString() << endl << endl;
        relatorio.relatorio(lista);
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        getchar();
        getchar();
        MenuManipulacaoDados();
        break;
    case 3:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl<< endl;
        cout<< QObject::tr( "\t\tFiltro de dados " ).toStdString() << endl;
        filtro.filtroDados(lista);
        getchar();
        getchar();
        MenuManipulacaoDados();
        break;
    case 4:
        Menu();
        break;
    default:
        getchar();
        MenuManipulacaoDados();
        break;
    }
}


void Telas::MenuTratamento(){
    system("cls");
    cout<< QObject::tr("____________________________________________________").toStdString() << endl;
    cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
    cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
    cout<< QObject::tr("1. Cadastar tratamento" ).toStdString() << endl;
    cout<< QObject::tr("2. Excluir tratamento" ).toStdString() << endl;
    cout<< QObject::tr("3. Consultar tratamento" ).toStdString() << endl;
    cout<< QObject::tr("4. Alterar tratamento" ).toStdString() << endl;
    cout<< QObject::tr("5. Mostrar tratamentos" ).toStdString() << endl;
    cout<< QObject::tr("6. Voltar" ).toStdString() << endl << endl;
    cout<< QObject::tr("____________________________________________________").toStdString() << endl;
    cout<< QObject::tr("Selecione uma das opcoes: " ).toStdString();


    int op;
    cin >> op;
    switch (op) {
    case 1:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doença de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tCadastro de tratamentos" ).toStdString() << endl;
        cout << endl;
        excecoes.ExcecoeesCadastrarTratamento(listaT);
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        getchar();
        getchar();
        MenuTratamento();
        break;
    case 2:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doença de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tAlterar tratamentos" ).toStdString() << endl;
        cout << endl;
        excecoes.ExcecoeesExcluirTratamento(listaT);
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        getchar();
        getchar();
        MenuTratamento();
        break;
    case 3:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tExcluir tratamentos" ).toStdString() << endl;
        cout << endl;
        excecoes.ExcecoeesConsultarTratamento(listaT);
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        getchar();
        getchar();
        MenuTratamento();
        break;
    case 4:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\tConsultar tratamentos" ).toStdString() << endl;
        cout << endl;
        excecoes.ExcecoeesAlterarTratamento(listaT);
        cout << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        getchar();
        getchar();
        MenuTratamento();
        break;
    case 5:
        system("cls");
        cout<< QObject::tr("____________________________________________________").toStdString() << endl;
        cout<< QObject::tr("Sistema de Apoio a Pesquisas da Doenca de Alzeheimer").toStdString() << endl;
        cout<< QObject::tr("____________________________________________________").toStdString() << endl << endl;
        cout<< QObject::tr( "\t\ttratamentos cadastrados: " ).toStdString() << endl;
        cout << endl;
        listaT->imprimirTratamento();
        cout << endl;
        getchar();
        getchar();
        MenuTratamento();
        break;
    case 6:
        Menu();
        break;
    default:
        getchar();
        MenuTratamento();
        break;
    }
}
