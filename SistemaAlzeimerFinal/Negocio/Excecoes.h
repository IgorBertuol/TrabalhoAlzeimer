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
    void ExcecoeesCadastraTratamento(ListaTratamento *tratamento);
    void ExcecoeesExcluiTratamento(ListaTratamento *tratamento);
    void ExcecoeesConsultaTratamento(ListaTratamento *tratamento);
    ListaPaciente *lista= new ListaPaciente;
    Arquivo arquivo;
    ListaTratamento *tratamento= new ListaTratamento;

};

#endif // EXCECOES_H
