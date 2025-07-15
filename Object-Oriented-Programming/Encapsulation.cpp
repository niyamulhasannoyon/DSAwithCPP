#include <iostream>
#include <string>
using namespace std;

//?Encapsulation is Wrapping data (attributes) and methods (functions) into a single unit (class). 
//?It restricts direct access to some of an object's components,
//?which can prevent the accidental modification of data.

//? Constructor\
//? Special method invoked automatically when an object is created. Used for initialization.

//? Same name as class
//? No return type
//? Automatically called when an object is created
//? Memory allocation for the object is done before the constructor is called
//? is a Special Pointer in C++
//? Syntex --- this -> prop or *(this).prop
class Teacher {
public:
    double salary;
    string name;
    string dept;
    string subject;

    Teacher(string name, string dept, string subject) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }
    //?copy constructor
    Teacher(Teacher &obj) {
        cout << "Copy Constructor Called" << endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary; //? Copying salary as well
    }
    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
    }
};

//? Copy Constructor 
//? A constructor that creates a new object as a copy of an existing object.

int main() {
    Teacher t1("John Doe", "CSE", "Mathematics"); //? Object of Teacher class with constructor
    //t1.getinfo();

    Teacher t2(t1);
    t2.getinfo();
    
    return 0;
}