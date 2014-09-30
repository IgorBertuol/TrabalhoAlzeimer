#ifndef EXCECOES_H
#define EXCECOES_H
#include "ListaPaciente.h"
#include "ListaTratamento.h"
#include "Paciente.h"
#include "Arquivo.h"


class Excecoes{
public:
    void ExcecoesCadastrarPaciente(ListaPaciente *lista);
    void ExcecoesAlterarPaciente(ListaPaciente *lista);
    void ExcecoesExcluirPaciente(ListaPaciente *lista);
    void ExcecoesConsultarPaciente(ListaPaciente *lista);
    ListaPaciente *lista= new ListaPaciente;
    Arquivo arquivo;

};

#endif // EXCECOES_H
