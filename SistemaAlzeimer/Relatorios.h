#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <iostream>
#include <string>
#include "Paciente.h"
#include "Lista.h"


using namespace std;

class Relatorios{
public:
    void relatorioSexo(Lista *lista,float cont);
    void relatorioContinente(Lista *lista,float cont);
    void relatorioXY(Lista *lista);
    void relatorio(Lista *lista);

};


#endif // RELATORIOS_H
