#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{

    Chef c_olio("Gordon");
    c_olio.makeSalad(0);
    c_olio.makeSoup(0);


    ItalianChef i_olio("Mario");
    i_olio.askSecret("pizza");
    return 0;
}
