/*
 * Coloque a definicao da classe aqui. Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 *
 *  Os atributos devem ser acessiveis somente internamente ao escopo
 *  da classe
 */

#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class Pessoa {
public:
  void setNome(string nome);
  void setDisponivel(bool disponivel);
  void setHorasDiarias (int horasDiarias);
  bool isDisponivel();
  int getHorasDiarias();
  void imprimir();

private:
  string nome;
  bool disponivel;
  int horasDiarias;

};
#endif // PESSOA_H
