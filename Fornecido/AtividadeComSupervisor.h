#ifndef ATIVIDADECOMSUPERVISOR_H
#define ATIVIDADECOMSUPERVISOR_H
#include "Atividade.h"
/* Inclua os arquivos necessarios.
 * A classe eh filha de Atividade.
 * Altere e/ou inclua os atributos e metodos necessarios nesta
 * definicao conforme necessario */


class AtividadeComSupervisor : public Atividade {
  public:
    AtividadeComSupervisor(string nome, int horasNecessarias,
                            int maximoPessoas, Pessoa* supervisor);
    ~AtividadeComSupervisor();
    Pessoa* getSupervisor();
  private:
    Pessoa* supervisor;
};

#endif // ATIVIDADECOMSUPERVISOR_H
