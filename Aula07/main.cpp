#include <iostream>
#include "Projeto.h"

using namespace std;

int main() {
    // Implemente os testes necessarios

    Projeto* proj = new Projeto ("Teste", 2);

    Atividade* a1 = new Atividade ("Ativ teste 1", 3, 2);
    Atividade* a2 = new Atividade ("Ativ teste 2", 3, 2);

    Pessoa* p1 = new Pessoa ("Maria", 2);
    Pessoa* p2 = new Pessoa ("Joao", 2);
    Pessoa* p3 = new Pessoa ("Claudio", 1);
    Pessoa* p4 = new Pessoa ("Jorge", 4);

    proj->adicionar(p1);
    proj->adicionar(p2);

    //a1->adicionar(p1);
    //a1->adicionar(p2);

    a2->adicionar(p3);
    a2->adicionar(p4);

    proj->adicionar(a1);
    proj->adicionar(a2);

    return 0;
}
