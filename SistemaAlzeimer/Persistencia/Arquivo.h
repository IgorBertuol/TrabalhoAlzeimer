#include <fstream>
#include "Negocio/Paciente.h"
#include "Negocio/ListaPaciente.h"
#include "Negocio/Tratamento.h"
#include <cstdlib>

#ifndef ARQUIVO_H
#define ARQUIVO_H

class Arquivo{
public:
    fstream arquivo;
    void escreverArquivo(ListaPaciente*);
    ListaPaciente *lerArquivo();
};

#endif // ARQUIVO_H
