
#include <iostream>
#include <vector>
#include <algorithm>

#include "student.h"

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    Student a("Aa",22);
    Student b("Bee",21);
    Student c("Cee",29);
    Student d("Dee",26);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    vector<Student>::iterator it = studentList.begin();
    string etsittavanimi;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Opiskelijoiden nimet: ";
            for (Student s: studentList) {
                cout << s.getName() << " ";
            }
            cout << endl;
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << endl << "Lajiteltu nimen perusteella" << endl;

            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
                 {
                     return eka.getName() < toka.getName();

                 }
                 );

            for (Student s: studentList) {
                s.printStudentinfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            cout << endl << "Lajiteltu ian perusteella" << endl;

            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
            {
                return eka.getAge() < toka.getAge();

            }
            );

            for (Student s: studentList) {
               s.printStudentinfo();
            }



            break;
        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Etsitaan nimi: ";
            cin >> etsittavanimi;

            it = find_if(studentList.begin(), studentList.end(),[etsittavanimi](Student &s){
                return s.getName() == etsittavanimi;
            }
            );
            if (it != studentList.end()){
                cout << "found" << endl;
                it->printStudentinfo();
            } else {
                cout << "not found" << endl;
            }


            break;

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    } while(selection < 5);

return 0;
}
