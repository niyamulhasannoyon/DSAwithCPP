#include <iostream>
#include <string>
using namespace std;

//? Abstraction --> Hiding all unnecessary details & showing only important parts 
//? Access modifier --> Private & Public & Protected
//? Can't create object of abstract class
//? Using Abstract class --> blue print of other classes 
//? Normal classes --> blueprint of other objects

class Shape {
    public:
        virtual void draw() = 0; // Pure virtual function

};
class Circle : public Shape {
    public:
        void draw() {
            cout << "Drawing a circle\n";
        }

};

int main() {
    //?Shape s1; //! Can't create object of abstract class
    Circle c1;
    c1.draw();


    return 0;
}