#include "PersistenciaPessoa.h"
#include "Pessoa.h"

int main() {

    PersistenciaPessoa* pers = new PersistenciaPessoa ("arquivo.txt");
    Pessoa* p1 = new Pessoa ("A", 1, 16);
    Pessoa* p2 = new Pessoa ("B", 3, 15);
    Pessoa* p3 = new Pessoa ("C", 6, 14);

    int x;

    pers->inserir(p1);
    pers->inserir(p2);
    pers->inserir(p3);

    Pessoa** vetor = new Pessoa*[3];

    vetor = pers->obter(x);

    cout << x << endl;

    delete pers;
    delete p1, p2, p3;

    return 0;
}
