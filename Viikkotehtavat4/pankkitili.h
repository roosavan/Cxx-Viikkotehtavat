#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>
using namespace std;
class pankkitili
{
public:
    pankkitili(string nimi);
    ~pankkitili();
    double getBalance();
    bool deposit(double amount);
    bool withdraw(double amount);

protected:
    string omistaja;
    double saldo;
};

#endif // PANKKITILI_H
