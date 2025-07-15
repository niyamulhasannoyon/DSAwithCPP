//?Parent to TWO CHILD send data 
#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
};

class Student : public Person {
    public:
        int rollno;
};

class Teacher : public Person {
    public:
        string subject;
        double salary;
};

int main() {
    Student s1;
    s1.name = "Niyamul Hasan";
    s1.rollno = 1247;
    s1.age = 21;

    cout << "Stident Details" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll no: " << s1.rollno << endl;
    cout << "Age: " << s1.age << endl;

    Teacher t1;
    t1.name = "Abu Taher";
    t1.subject = "CSE";
    t1.age = 124;
    t1.salary = 67890;

    cout << "Teacher Detail" << endl;
    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Age: " << t1.age << endl;
    cout << "Salary: " << t1.salary << endl;

    return 0;
}