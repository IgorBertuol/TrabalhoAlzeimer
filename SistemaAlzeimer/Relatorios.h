#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <iostream>
#include <string>
#include "Paciente.h"
#include "Lista.h"


using namespace std;

class Relatorios{
public:
    void RelatorioSexo(Lista *lista,float cont);
    void RelatorioContinente(Lista *lista,float cont);
    void RelatorioXY(Lista *lista);
    void Relatorio(Lista *lista);

};


#endif // RELATORIOS_H
