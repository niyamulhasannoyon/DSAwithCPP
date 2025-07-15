//? OOPS   

//? Objects = entities in the real world or instances of classes
//? Classes = blueprints for creating objects/entities


#include <iostream>
#include <string>
using namespace std;

class Teacher {
    //? Properties , Attributes
private:
    double salary;

public: //? Access Specifier
    string name;
    string dept;
    string subject;

    //? Methodes/member Functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    void setSalary(double s) {
        salary = s;
    }
    double getSalary() {
        return salary;
    }



};

int main() {
    Teacher t1; //? Object of Teacher class

    t1.name = "John Doe"; //? Accessing properties directly is not allowed, need to use methods
    t1.subject = "Mathematics";
    t1.dept = "CSE";
    t1.setSalary(50000); //? Setting salary using method
    
    cout << t1.getSalary() << endl; //? Accessing salary using method

    return 0;
}