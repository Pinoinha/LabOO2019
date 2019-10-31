#ifndef PROJETO_H
#define PROJETO_H

#include <algorithm>
#include <list>
#include <string>
#include <vector>

#include "Atividade.h"
#include "Pessoa.h"

using namespace std;

class Projeto {
public:
    Projeto(string nome);
    ~Projeto();

    int getDuracao();
    vector<Atividade*>* getAtividades();
    list<Pessoa*>* getPessoas();

    void adicionar(Atividade* a);
    void adicionar(Pessoa* p);

private:
    string nome;
    int quantidadePessoas;
    vector<Atividade*>* atividades;
    list<Pessoa*>* pessoas;
};

#endif // PROJETO_H
