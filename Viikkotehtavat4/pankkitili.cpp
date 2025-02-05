#include "pankkitili.h"
#include <iostream>
using namespace std;

pankkitili::pankkitili(string nimi) : omistaja(nimi), saldo(0)
{
    cout << "Pankkitili konstruktori" << endl;
}

pankkitili::~pankkitili()
{
    cout << "Pankkitili destruktori" << endl;
}

double pankkitili::getBalance()
{
    return saldo;
}

bool pankkitili::deposit(double amount)
{
    if (amount > 0) {
        saldo += amount;
        return true;
    }
    return false;
}

bool pankkitili::withdraw(double amount)
{
    if (amount > 0 && saldo >= amount) {
        saldo -=amount;
        return true;
    }
    return false;
}
