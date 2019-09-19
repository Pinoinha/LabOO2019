#ifndef PROJETO_H
#define PROJETO_H
#include "Atividade.h"

/* Fazer includes necessarios!
 */

class Projeto {
  public:
    Projeto(string nome, int maximoAtividades);
    ~Projeto();

    int getDuracao();
    int getQuantidade();
    bool adicionar(Atividade* a);

  private:
    /* Adicionar atributos necessarios */
    string nome;
    int maximoAtividades;
    Atividade** atividades;
    int numAtividades = 0;
};

#endif // PROJETO_H
