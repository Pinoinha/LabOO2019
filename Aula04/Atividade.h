/*
 * Use as diretivas adequadas e inclua os arquivos e/ou bibliotecas
 * necessarios para a implementacao da classe
 */

#define NUMERO_MAXIMO_VALORES 10
#include <iostream>
#include "Pessoa.h"

using namespace std;

class Atividade {
  /*
  *  Os atributos podem ser acessados somente internamente ao escopo
  *  da classe
  */

  /*
  * Os metodos podem ser acessados de fora do escopo da classe
  */
public:
  void setNome(string nome);
  void setHorasNecessarias(int horasNecessarias);
  int getHorasNecessarias();
  int getQuantidade();

  bool adicionar(Pessoa* p);
  int getDuracao();
  void imprimir();

private:
    string nome;
    int horasNecessarias;
    Pessoa* pessoas[NUMERO_MAXIMO_VALORES];
    int numPessoas = 0;

};
