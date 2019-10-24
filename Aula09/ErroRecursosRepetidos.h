#ifndef ERRO_RECURSOS_H
#define ERRO_RECURSOS_H

#include <stdexcept>
#include <string>

using namespace std;

class ErroRecursosRepetidos : public invalid_argument {
  public:
    ErroRecursosRepetidos (string mensagem);
    ~ErroRecursosRepetidos ();
};

#endif  // ERRO_RECURSOS_H
