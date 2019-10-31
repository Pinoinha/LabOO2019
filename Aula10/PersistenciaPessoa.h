#ifndef PERSISTENCIAPESSOA_H
#define PERSISTENCIAPESSOA_H

/*  Faca os includes necessarios!
 */
#include <stdexcept>
#include <string>
#include <fstream>

#include "Pessoa.h"

class PersistenciaPessoa {
    public:
        PersistenciaPessoa (string arquivo);
        virtual ~PersistenciaPessoa();

        void inserir(Pessoa* p);

        Pessoa** obter (int& quantidade);
    private:
        string arquivo;
        int quantidadeInfo;
};

#endif // PERSISTENCIAPESSOA_H
