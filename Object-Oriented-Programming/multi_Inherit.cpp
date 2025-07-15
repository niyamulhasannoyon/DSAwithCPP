#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int rollno;
    Student(string name,int rollno) {
        this->name = name;
        this->rollno = rollno;
    }
};

class Teacher {
    public:
        string subject;
        int salary;
    Teacher(string subject, int salary) {
        this->subject = subject;
        this->salary = salary;
    }
};

class TA : public Student, public Teacher {
    public:
        string researcher;
    TA(string name,int rollno, string subject, int salary,string researcher ) : Student( name, rollno), Teacher( subject, salary) {
        this->researcher = researcher;
    }

    void getInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Rool No: " << rollno << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "Researcher Nmae: " << researcher << endl;
    }
};

int main() {
    TA t1("Niyamul Hasan", 1245, "Engineering", 14568, "Kalam" );
    t1.getInfo();

    return 0;
}
