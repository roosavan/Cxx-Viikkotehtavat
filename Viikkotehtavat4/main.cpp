#include "asiakas.h"
#include <iostream>
using namespace std;

int main()
{
    asiakas asiakas1("Testi Testaaja", 600);
    asiakas asiakas2("Mikko Mallikas", 1000);

    asiakas1.talletus(600);
    asiakas2.talletus(300);

    asiakas1.nosto(100);
    asiakas2.nosto(200);

    asiakas1.luotonNosto(0);
    asiakas2.luotonNosto(0);

    asiakas1.luotonMaksu(0);
    asiakas2.luotonMaksu(0);

    cout << "Saldot ennen tilisiirtoa: " << endl;
    asiakas1.showSaldo();
    asiakas2.showSaldo();

    cout << "Testi siirtaa 100 euroa Mikolle" << endl;
    asiakas1.tiliSiirto(100, asiakas2);

    cout << "Saldot tilisiirron jalkeen: " << endl;
    asiakas1.showSaldo();
    asiakas2.showSaldo();
    return 0;
}
