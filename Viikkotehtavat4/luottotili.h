#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"
#include <string>
using namespace std;

class luottotili : public pankkitili
{
public:
    luottotili(string nimi, double raja);
    ~luottotili();
    bool deposit(double amount);
    bool withdraw(double amount);

private:
    double luottoRaja;
};

#endif // LUOTTOTILI_H
