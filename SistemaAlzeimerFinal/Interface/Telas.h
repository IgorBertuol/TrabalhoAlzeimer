#ifndef TELAS_H
#define TELAS_H

#include <iostream>
#include <string>
#include "Negocio/Paciente.h"
#include "Negocio/ListaPaciente.h"
#include "Negocio/Relatorios.h"
#include "Persistencia/Arquivo.h"
#include "Negocio/Excecoes.h"
//#include "Negocio/DadosEstatisticos.h"


using namespace std;

class Telas{
public:
    void Menu();
    void MenuPaciente();
    void MenuManipulacaoDados();
    void MenuManipulacaoDadosRelatorio();
    void MenuTratamento();

    Relatorios relatorio;
    ListaPaciente *lista= new ListaPaciente;
    Arquivo arquivo;
    Excecoes excecoes;
    ListaTratamento *tratamento= new ListaTratamento;


};


#endif // TELAS_H
