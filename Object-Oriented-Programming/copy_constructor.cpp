#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    //double cgpa;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        //this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;


    }
    Student(Student &obj) {
        //cout << "Copy Constructor Called" << endl;
        this->name = obj.name;
        cgpaPtr = new double; // Allocate new memory for cgpaPtr
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Niyamul Hasan", 3.75);

    Student s2(s1);
    //s2.getInfo();
    s1.getInfo();//before modification
    *(s2.cgpaPtr) = 4.0; // Modifying the CGPA of s2
    s1.getInfo();//after modification
    s2.name = "Noyon";
    s2.getInfo(); // Displaying s2's info after modification
    return 0;
}