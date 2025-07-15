#include <iostream>
#include <string>
using namespace std;

//? Static Variable
//? In Function --> Created and initialized once for lifetime of the program. 
void fun() {
    //int x = 0;
    static int x = 0;
    cout<<"X : "<< x << endl;
    x++;
};
//? Static class
//? In Classs -->  Created and initialized once Shared by all the objects of this class.
class A {
    public:
        int y;

        void intX(){
            y = y+1;
        }
};
//? Static Object
//? Life time memory allocate that program.
class ABC {
    public:
        ABC() {
            cout << "Constructor\n"<< endl;
        }
        ~ABC() {
            cout << "Destructor\n"<< endl;
        }
};

int main() {
    fun();
    fun();
    fun();

    //? Static class
    A a1;
    A a2;

    a1.y = 100;
    a2.y = 200;
    cout << a2.y << endl;
    cout << a1.y << endl;

    //? Static Objects
    if(true) {
        ABC obj;
    }
    cout << "End of Main Funtion" << endl;
    
    return 0;
}