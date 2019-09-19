#include <iostream>
#include "Pessoa.h"
#include "Atividade.h"

using namespace std;

int main() {

     string nome, nomePes;
     Pessoa* pessoa1 = new Pessoa;
     Atividade* ativ = new Atividade;

     cout << "Digite o nome da pessoa 1: ";
     cin >> nomePes;

     pessoa1->setNome(nomePes);
     pessoa1->setDisponivel(true);
     pessoa1->setHorasDiarias(2);

     ativ->setHorasNecessarias(4);
     ativ->setNome("EP1");
     ativ->adicionar(pessoa1);

     ativ->imprimir();


    return 0;
}

