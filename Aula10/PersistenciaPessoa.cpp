/*  Implemente os metodos!
 */

#include "PersistenciaPessoa.h"

PersistenciaPessoa::PersistenciaPessoa(string arquivo) : arquivo (arquivo) {
    this->quantidadeInfo = 0;
}

PersistenciaPessoa::~PersistenciaPessoa() {cout << "PersistenciaPessoa destruido." << endl;}

void PersistenciaPessoa::inserir(Pessoa* p) {
    ofstream entrada;

    entrada.open (this->arquivo, ios_base::app);

    entrada << p->getNome() << endl;
    entrada << p->getValorPorHora() << endl;
    entrada << p->getHorasDiarias() << endl;

    entrada.close ();

    this->quantidadeInfo++;

    cout << "Pessoa inserida." << endl;
}

Pessoa** PersistenciaPessoa::obter(int& quantidade) {
    Pessoa** vetor = new Pessoa*[10];

    ifstream leitura;

    leitura.open (this->arquivo);

    // Caso o arquivo nao seja encontrado
    if (leitura.fail()) {
        leitura.close ();
        throw new invalid_argument ("Arquivo nao encontrado.");
    }

    // Caso o arquivo esteja vazio
    if (this->quantidadeInfo == 0) {
        leitura.close ();

        return NULL;
    }

    quantidade = 0;

    while (leitura) {
        string nomePessoa;
        int valorPorHora;
        int horasDiarias;

        leitura >> nomePessoa;
        leitura >> valorPorHora;
        leitura >> horasDiarias;

        vetor[quantidade] = new Pessoa (nomePessoa, valorPorHora, horasDiarias);

        quantidade++;
    }

    if (!leitura.eof()) {
        leitura.close ();
        throw new logic_error ("Formatacao invalida.");
    }

    leitura.close ();

    return vetor;
}

