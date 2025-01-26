#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;
class Chef
{
public:
    Chef(string name);
    ~Chef();
    Chef();

    string getName() const;
    int makeSalad(int aines);
    int makeSoup(int aines);
protected:
    string chefName;

private:


};

#endif // CHEF_H
