#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"


using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Baabeli");
    Seuraaja *C = new Seuraaja("Ceepeli");

    Notifikaattori *n = new Notifikaattori();
    cout << endl;
    n->lisaa(A);
    n->lisaa(B);
    n->lisaa(C);
    n->tulosta();

    n->postita("Viestin testaaminen");
    n->poista(B);
    n->postita("Toinen viesti");

    delete A;
    delete B;
    delete C;
    delete n;
    return 0;
}
