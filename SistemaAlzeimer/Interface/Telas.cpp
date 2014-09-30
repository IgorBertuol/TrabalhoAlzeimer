#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Telas.h"

void Telas::Menu() {
   system("clear");
   cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
   cout<<"1. Pacientes" << endl;
   cout<<"2. Manipulacao de dados" << endl;
   cout<<"3. Ajustes" << endl << endl;
    cout <<"Selecione uma das opcoes: ";
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
   cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
   cout<<"1. Cadastar paciente" << endl;
   cout<<"2. Alterar paciente" << endl;
   cout<<"3. Excluir paciente" << endl;
   cout<<"4. Consultar paciente" << endl;
   cout<<"5. Mostrar pacientes cadastrados" << endl;
   cout<<"6. Voltar" << endl << endl;
    cout <<"Selecione uma das opcoes: ";
    int op;
    cin >> op;
    switch (op) {
    case 1:
        system("clear");
        cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
        cout<< "Cadastro de pacientes" << endl << endl;
        excecoes.ExcecoesCadastrarPaciente(lista);
        MenuPaciente();
        break;
    case 2:
        system("clear");
        cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
        cout<< "Cadastro de pacientes" << endl << endl;
        excecoes.ExcecoesAlterarPaciente(lista);
        MenuPaciente();
        break;
    case 3:
        system("clear");
        cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
        cout<< "Cadastro de pacientes" << endl << endl;
        excecoes.ExcecoesExcluirPaciente(lista);
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 4:
        system("clear");
        cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;

        cout<< "Cadastro de pacientes" << endl << endl;
        excecoes.ExcecoesConsultarPaciente(lista);
        getchar();
        getchar();
        MenuPaciente();
        break;
    case 5:
            system("clear");
            cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
            cout<< "Pacientes cadastrados: " << endl << endl;
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
    cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
    cout<<"1. Geracao de dados estatisticos" << endl;
    cout<<"2. Geracao de relatorios" << endl;
    cout<<"3. Filtro de dados" << endl;
    cout<<"4. Voltar" << endl << endl;
     cout <<"Selecione uma das opcoes: ";
     int op;
     cin >> op;
     switch (op) {
     case 1:

         break;
     case 2:
         system("clear");
         cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
         cout<< "Geração de relatórios " << endl << endl;
         relatorio.Relatorio(lista);
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
    cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
    cout<<"1. Importar CSV   " << endl;
    cout<<"2. Mudar idioma  " << endl;
    cout<<"3. Voltar" << endl << endl;
     cout <<"Selecione uma das opcoes: ";
     int op;
     cin >> op;
     switch (op) {
     case 1:

         break;
     case 2:
         system("clear");
         cout<< "Sistema de Apoio a Pesquisas da Doença de Alzeheimer" << endl << endl;
         cout<< "Geração de relatórios " << endl << endl;
         relatorio.Relatorio(lista);
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

    int cont;
        string nome = "igor";
        Paciente *paciente = new Paciente("igor",12,"america","M","Sim","natural");
        Paciente *paciente1 = new Paciente("igor",20,"europa","F","Sim","natural");
        Paciente *paciente2 = new Paciente("igor",40,"asia","M","Sim","natural");
        Paciente *paciente3 = new Paciente("igor",40,"europa","M","Sim","natural");
        lista->inserir(paciente);
        lista->inserir(paciente1);
        lista->inserir(paciente2);
        lista->inserir(paciente3);
        lista->imprimir();
        //relatorio.RelatorioContinente(lista);
        relatorio.Relatorio(lista);
        //cout << lista->contador()<<endl;
        //arquivo.escreverArquivo(lista);
        //lista = arquivo.lerArquivo();
        //lista->imprimir();

}
