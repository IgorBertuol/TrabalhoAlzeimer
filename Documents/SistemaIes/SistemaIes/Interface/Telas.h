#ifndef TELAS_H
#define TELAS_H

#include <iostream>
#include <string>
#include "Negocio/Paciente.h"
#include "Negocio/ListaPaciente.h"
#include "Negocio/Relatorios.h"
#include "Persistencia/Arquivo.h"
#include "Interface/Excecoes.h"
#include "Negocio/Filtros.h"


using namespace std;

class Telas{
public:
    void Menu();
    void MenuPaciente();
    void MenuManipulacaoDados();
    void MenuManipulacaoDadosRelatorio();
    void MenuTratamento();
    Filtro filtro;
    Relatorios relatorio;
    ListaPaciente *lista;
    Arquivo arquivo;
    Excecoes excecoes;
    ListaTratamento *listaT;

    Telas(){
        lista = new ListaPaciente;
        listaT =  new ListaTratamento;

    }


};


#endif // TELAS_H
