#ifndef PROJETO_H
#define PROJETO_H

#include <string>
#include "Atividade.h"

using namespace std;

class Projeto {
public:
    Projeto (string nome, int maximoValor);
    ~Projeto ();

    int getDuracao ();
    int getQuantidadeAtividades ();
    Atividade** getAtividades ();
    Atividade** getAtividadesSemSupervisor (int &quantidade);

    Pessoa** getPessoas ();
    int getQuantidadePessoas ();

    bool adicionar (Atividade* a);
    bool adicionar (Pessoa* p);

private:
    string nome;
    int maximoValor;
    int quantidadeAtividades;
    int quantidadePessoas;
    Atividade** atividades;
    Atividade** atividadesSemSupervisor;
    Pessoa** pessoasAdicionadas;

};

#endif // PROJETO_H
