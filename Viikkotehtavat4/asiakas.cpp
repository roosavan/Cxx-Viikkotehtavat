#include "asiakas.h"
#include <iostream>
using namespace std;

asiakas::asiakas(string nimi, double luottoraja) : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoraja)
{
    cout << "Asiakas konstruktori" << endl;
}

asiakas::~asiakas()
{
    cout << "Asiakas destruktori" << endl;
}

string asiakas::getNimi()
{
    return nimi;
}

double asiakas::getPankkitiliSaldo()
{
    return kayttotili.getBalance();
}

double asiakas::getLuottotiliSaldo()
{
    return luottotili.getBalance();
}

void asiakas::showSaldo()
{
    cout << "Asiakas: " << nimi << endl;
    cout << "Pankkitilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool asiakas::talletus(double amount)
{
    return kayttotili.deposit(amount);
}

bool asiakas::nosto(double amount)
{
    return kayttotili.withdraw(amount);
}

bool asiakas::luotonMaksu(double amount)
{
    return luottotili.deposit(amount);
}

bool asiakas::luotonNosto(double amount)
{
    return luottotili.withdraw(amount);
}

bool asiakas::tiliSiirto(double amount, asiakas &kohde)
{
    if (amount >0 && kayttotili.withdraw(amount)) {
        kohde.talletus(amount);
        cout << nimi << " siirsi rahaa " << kohde.getNimi() << ": " << amount << " euroa" << endl;
        return true;
    }
    cout << "Siirto epaonnistui" << endl;
    return false;
}
