#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string input);

    string getPassword() const;

private:
    int makePizza(int water = 0, int flour = 0);
    string password = "pizza";
};

#endif // ITALIANCHEF_H
