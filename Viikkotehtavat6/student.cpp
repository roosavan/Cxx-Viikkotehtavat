#include "student.h"
#include <iostream>

Student::Student(string n, int a)
{
    name=n;
    age=a;
}

Student::~Student(){}

void Student::printStudentinfo()
{
    cout << "Name: " << name << " Age: " << age << endl;
}

void Student::setAge(int uusi)
{
    age=uusi;
}

void Student::setName(string uusi)
{
    name=uusi;
}

int Student::getAge()
{
    return age;
}

string Student::getName()
{
    return name;
}
