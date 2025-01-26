#include "italianchef.h"


ItalianChef::ItalianChef(string nimi) {
    cout << "ItalianChef konstuktori, nimi: "
         << nimi
         << endl;
}
ItalianChef::~ItalianChef(){
    cout << "ItalianChef destruktori" << endl;
}


bool ItalianChef::askSecret(string input)
{
    cout << "Anna salasana: ";
    cin >> input;
    if (input == password){
        cout << "true" << endl;
        makePizza();
        return true;
    } else {
        cout << "false" << endl;
        return false;
    }
}

int ItalianChef::makePizza(int water, int flour)
{
    int pizzamaara= 0;
    cout << "Vesimaara: ";
    cin >> water;
    cout << "Jauhomaara: ";
    cin >> flour;

    if (water > flour){
        pizzamaara = flour / 5;
    } else {
        pizzamaara = water / 5;
    }
    cout << "Pizzamaara: "
         << pizzamaara
         << endl;
}

