#include <iostream>

#include "Projeto.h"

using namespace std;

int main() {
    // Implemente os testes necessarios
    Projeto* proj = new Projeto ("Teste", 2);
    Atividade* a1 = new Atividade ("ativ1", 5, 1);
    Atividade* a2 = new Atividade ("ativ2", 5, 1);
    Pessoa* p1 = new Pessoa ("pessoa1", 2);
    Pessoa* p2 = new Pessoa ("pessoa2", 3);

    int duracao;

    //a1->adicionar(p1);
    a2->adicionar(p2);

    proj->adicionar(a1);
    proj->adicionar(a2);

    duracao = proj->getDuracao();

    cout << "A duracao e: " << duracao << endl;

    return 0;
}
