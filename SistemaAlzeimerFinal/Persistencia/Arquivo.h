#include <fstream>
#include "Negocio/Paciente.h"
#include "Negocio/ListaPaciente.h"
#include "Negocio/Tratamento.h"
#include "Negocio/ListaTratamento.h"
#include <cstdlib>

#ifndef ARQUIVO_H
#define ARQUIVO_H

class Arquivo{
public:
    fstream arquivo;
    void escreverArquivoP(ListaPaciente*);
    ListaPaciente *lerArquivoP();
    ListaTratamento *lerArquivoT();
    void escreverArquivoT(ListaTratamento*);
};

#endif // ARQUIVO_H
