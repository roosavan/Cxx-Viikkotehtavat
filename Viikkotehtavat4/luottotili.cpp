#include "luottotili.h"
#include <iostream>
using namespace std;

luottotili::luottotili(string nimi, double raja) : pankkitili(nimi), luottoRaja (-raja)
{
    cout << "Luottotili konstruktori" << endl;
}

luottotili::~luottotili()
{
    cout << "Luottotili destruktori" << endl;
}

bool luottotili::deposit(double amount)
{
    if (amount > 0 && saldo + amount <= 0) {
        saldo += amount;
        return true;
    }
    return false;
}

bool luottotili::withdraw(double amount)
{
    if (amount > 0 && saldo - amount >= luottoRaja) {
        saldo -= amount;
        return true;
    }
    return false;
}

