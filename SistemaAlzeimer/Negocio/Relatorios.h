#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <iostream>
#include <string>
#include "Paciente.h"
#include "ListaPaciente.h"


using namespace std;

class Relatorios{
public:
    void relatorioSexo(ListaPaciente *lista,float cont);
    void relatorioContinente(ListaPaciente *lista,float cont);
    void relatorioXY(ListaPaciente *lista,float cont);
    void relatorio(ListaPaciente *lista);

};


#endif // RELATORIOS_H
