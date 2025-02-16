#include "notifikaattori.h"


Notifikaattori::Notifikaattori()
{
}

Notifikaattori::~Notifikaattori()
{
}

void Notifikaattori::lisaa(Seuraaja *seur)
{
    cout << "Lisataan " << seur->getNimi() << " listalle" << endl;
    seur->next = seuraajat;
    seuraajat = seur;
}

void Notifikaattori::poista(Seuraaja *seur)
{
    if (seuraajat == nullptr){
        cout << "Lista tyhja, ei voida poistaa" << endl;
        return;
    }

    if (seuraajat == seur) {
        seuraajat = seuraajat->next;
        seur->next = nullptr;
        cout << "Poistetaan " << seur->getNimi() << " listalta" << endl;
        return;
    }
    Seuraaja *curr = seuraajat;
    while (curr->next != nullptr) {
        if (curr->next == seur) {
            curr->next = curr->next->next;
            seur->next = nullptr;
            cout << "Poistetaan " << seur->getNimi() << " listalta" << endl;
            return;
        }
        curr = curr->next;
    }
    cout << seur->getNimi() << " ei loytynyt listalta" << endl;
}

void Notifikaattori::tulosta()
{
    Seuraaja* curr = seuraajat;
    cout << "Seuraajat listalla:" << endl;
    while (curr != nullptr){
        cout << "- " << curr->getNimi() << endl;
        curr = curr->next;
    }
}

void Notifikaattori::postita(string v)
{
    Seuraaja* curr = seuraajat;
    while (curr != nullptr){
        curr->paivitys(v);
        curr = curr ->next;
    }
}
