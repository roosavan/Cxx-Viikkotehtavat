#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "pankkitili.h"
#include "luottotili.h"
#include <string>
using namespace std;

class asiakas
{
public:
    asiakas(string nimi, double luottoRaja);
    ~asiakas();

    string getNimi();

    double getPankkitiliSaldo();
    double getLuottotiliSaldo();

    void showSaldo();

    bool talletus(double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);
    bool tiliSiirto(double amount, asiakas &kohde);

private:
    string nimi;
    pankkitili kayttotili;
    luottotili luottotili;
};

#endif // ASIAKAS_H
