#ifndef TELAS_H
#define TELAS_H

#include <iostream>
#include <string>
#include "Negocio/Paciente.h"
#include "Negocio/ListaPaciente.h"
#include "Negocio/Relatorios.h"
#include "Negocio/Tratamento.h"
#include "Interface/Telas.h"
#include "Persistencia/Arquivo.h"


using namespace std;

class Telas{
public:
    void menu();
    void menuPaciente();
    void menuPacienteCadastrar();
    void menuManipulacaoDados();
    void menuOpcoes();
    void teste();
    Relatorios relatorio;
    ListaPaciente *lista= new ListaPaciente;
    Arquivo arquivo;


};


#endif // TELAS_H
