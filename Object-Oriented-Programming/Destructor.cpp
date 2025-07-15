#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    ~Student() {
        cout << "Hi, I delete everything" << endl;
        delete cgpaPtr; // Free the dynamically allocated memory
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Niyamul Hasan", 3.75);
    s1.getInfo();

    return 0;
}