/*  Faca os includes necessarios!
 */
#include "Pessoa.h"
//void imprimir (Pessoa* p) {
//    cout << "Pessoa de nome " << p->getNome() << endl;
//    cout << "Valor por hora: " << p->getValorPorHora() << endl;
//    cout << "Horas diarias: " << p->getHorasDiarias() << endl;
//    cout << "Custo: ";
//}

int main() {
    /*  Teste o programa!
     */

     Pessoa* p = new Pessoa ("A", 2, 3);

     cout << p->getValorPorHora() << endl;

     p->setValorPorHoraPadrao(10);

     cout << p->getValorPorHora() << endl;

     delete p;

    return 0;
}
