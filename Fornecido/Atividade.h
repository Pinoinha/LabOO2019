#ifndef ATIVIDADE_H
#define ATIVIDADE_H

#include <iostream>
#include <string>
#include <cmath>

#include "Pessoa.h"

using namespace std;

class Atividade {
  private:
    Pessoa** pessoas;
    int quantidade = 0;

  protected:
    string nome;
    int horasNecessarias;
    int maximoPessoas;

  public:
    Atividade(string nome, int horasNecessarias, int maximoPessoas);
    ~Atividade();
    int getHorasNecessarias();
    int getQuantidade();

    bool adicionar(Pessoa* p);
    int getDuracao();
    void imprimir();
  };

#endif // ATIVIDADE_H
