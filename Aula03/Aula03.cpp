#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
    string nome;
    bool disponivel;
    int horasMensais;

    double getSalarioDiario();
    void imprimir();
};

/** @TODOS: Implementar metodos da classe Pessoa **/

double Pessoa::getSalarioDiario() {
    double salDiario;

    if (this->disponivel) {
        salDiario = 50 + (this->horasMensais / 22.0);

        return salDiario;
    }

    else {
        return 0;
    }
}

void Pessoa::imprimir() {
    string disp;

    if (this->disponivel) {
        disp = "disponivel";
    }
    else {
        disp = "indisponivel";
    }

    cout << this->nome << "- disp - " << this->horasMensais << "h/mes - " << "R$" << this->getSalarioDiario() << "por dia";
}

class Atividade {
public:
    string nome;
    int duracao;
    Pessoa *p1 = NULL;
    Pessoa *p2 = NULL;

    Pessoa* getResponsavel();
    bool adicionar(Pessoa *p);
    double getCusto();
    void imprimir();
};

/** @TODOS: Implementar metodos da classe Atividade **/

Pessoa* Atividade::getResponsavel() {

    if (this->p1 == NULL && this->p2 == NULL) {
        return  NULL;
    }

    else {

        if (this->p1->getSalarioDiario() > this->p2->getSalarioDiario()) {
            return p2;
        }

        else if (this->p1->getSalarioDiario() < this->p2->getSalarioDiario()) {
            return p1;
        }
    }
}

bool Atividade::adicionar(Pessoa *p) {
    if (p->disponivel) {
        if (p1 == NULL) {
            p1 = p;
        }
        else if (p2 == NULL) {
            p2 = p;
        }
    }

    else {
        return false;
    }
}

double Atividade::getCusto() {
    double custo;
    Pessoa* pes;

    if (this->getResponsavel() != NULL) {
        pes = this->getResponsavel();
        custo = this->duracao * pes->getSalarioDiario();

        return custo;
    }

    else {
        return -1;
    }
}

void Atividade::imprimir() {
    string nomeResp, disp;
    Pessoa* pes;

    pes = this->getResponsavel();

    cout << this->nome << " - " << this->duracao << " dias - " << "R$" << this->getCusto() << endl;
    pes->imprimir();
}

/** @TODOS: Testar classes no metodo main().

    REMOVER METODO main() ANTES DE ENVIAR AO JUDGE!
**/

int main() {
    double salario1, salario2;
    bool adicionou1, adicionou2, adicionou3;
    Pessoa *pessoa1 = new Pessoa;
    Pessoa *pessoa2 = new Pessoa;
    Pessoa *pessoa3 = new Pessoa;
    Atividade *ativ = new Atividade;

    pessoa1->nome = "Pedroca";
    pessoa2->nome = "Joana";

    pessoa1->horasMensais = 0;
    pessoa2->horasMensais = 120;

    pessoa1->disponivel = true;
    pessoa2->disponivel = true;

    ativ->nome = "Teste";
    ativ->duracao = 2;
    ativ->adicionar(pessoa1);
    ativ->adicionar(pessoa2);

    pessoa1->imprimir();
    cout << endl;
    pessoa2->imprimir();
    cout << endl;
    ativ->imprimir();

    return 0;
}

