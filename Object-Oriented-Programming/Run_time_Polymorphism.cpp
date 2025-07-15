#include <iostream>
#include <string>
using namespace std;
//? Run time Polymorphism
//? Function Overloading
class Parent {
    public:
        void getInfo() {
            cout << "Parent Class\n";
        }
};

class Child : public Parent {
    public:
        void getInfo() {
            cout << "Child Class\n";
        }
};

//? Virtual Function
class Teacher {
    public:
        virtual void hello() {
            cout << "Hello from Teacher\n";
        }
};

class Student : public Teacher {
    public:
        void hello() {
            cout << "Hello from Student\n";
        }
};

int main() {
    //? Function Overloading
    Child c1;
    c1.getInfo();
    // Parent p1;
    // p1.getInfo();

    //? Virtual Function Overloading
    Student s1;
    s1.hello();

    return 0;
}