#include "chef.h"

Chef::Chef()
{
    cout << "Defaultti konstruktori, ei nimea" << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstuktori, nimi: "
         << chefName
         << endl
         << endl;
}

Chef::~Chef()
{
    cout << "Chef destuktori" << endl;
}

string Chef::getName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    cout << "Anna salaattiainesten maara: ";
    cin >> aines;
    int annoksia = aines / 5;
    cout << "Aineksia "
         << aines
         << endl;
    cout << "Annoksia "
         << annoksia
         << " eli "
         << aines
         << "/5"
         << endl
         << endl;
    // 5 ainesta
}

int Chef::makeSoup(int aines)
{
    cout << "Anna keittoainesten maara: ";
    cin >> aines;
    int annoksia2 = aines / 3;
    cout << "Aineksia "
         << aines
         << endl;
    cout << "Annoksia "
         << annoksia2
         << " eli "
         << aines
         << "/3"
         << endl
         << endl;

    // 3 ainesta
}
