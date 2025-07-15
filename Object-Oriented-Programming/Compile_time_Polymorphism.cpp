#include <iostream>
#include <string>
using namespace std;
//? Compile time Polymorphism
//? Constructor Overloading
class Student {
    public:
        string name;
    
    Student() {
        cout << "Non-parameterized\n";
    }
    
    Student(string name) {
        this->name = name;
        cout << "Parameterized\n";
    }

};

//? Function Overloading

class Print {
    public:
        void show(int x) {
            cout << "int : " << x << endl;
        }
        void show(char x) {
            cout << "char : " << x << endl;
        }
};

//? Operator  Overloading 


int main() {
    //? //? Constructor Overloading
    Student s1("Niyamul Hasan");

    //? Function Overloading
    Print p1;
    p1.show('b');
    p1.show(101);

    //? Operator  Overloading 


    return 0;
}