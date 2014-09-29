#ifndef TELAS_H
#define TELAS_H

#include <iostream>
#include <string>
#include "Paciente.h"
#include "Lista.h"
#include "Relatorios.h"
#include "Arquivo.h"


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
    Lista *lista= new Lista;
    Arquivo arquivo;


};


#endif // TELAS_H
