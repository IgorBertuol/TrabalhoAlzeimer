#ifndef EXCECOES_H
#define EXCECOES_H
#include "Negocio/ListaPaciente.h"
#include "Negocio/ListaTratamento.h"
#include "Negocio/Paciente.h"
#include "Persistencia/Arquivo.h"


class Excecoes{
public:
    void ExcecoesCadastrarPaciente(ListaPaciente *lista);
    void ExcecoesAlterarPaciente(ListaPaciente *lista);
    void ExcecoesExcluirPaciente(ListaPaciente *lista);
    void ExcecoesConsultarPaciente(ListaPaciente *lista);
    void ExcecoeesCadastrarTratamento(ListaTratamento *tratamento);
    void ExcecoeesAlterarTratamento(ListaTratamento *tratamento);
    void ExcecoeesExcluirTratamento(ListaTratamento *tratamento);
    void ExcecoeesConsultarTratamento(ListaTratamento *tratamento);
    Arquivo arquivo;

};

#endif // EXCECOES_H
