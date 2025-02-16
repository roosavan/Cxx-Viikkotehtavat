#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
public:
    Student(string n, int a);
    ~Student();
    void printStudentinfo();
    void setAge(int uusi);
    void setName(string uusi);
    int getAge();
    string getName();

private:
    string name;
    int age;
};

#endif // STUDENT_H
