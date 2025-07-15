#include<iostream>
#include<string>
using namespace std;

int main() {

    //* char str1[] = {'a', 'b', 'c', '\0'};
    //* char str[] = "Hello"; // strying literals
    //* cout << str1 << endl;
    //* cout << strlen(str) << endl; //strlen = Strying Length
    //* cout << strlen(str) << endl; 

    //! char str[100];
    //! cout << "Enter a character  ";
    //! cin >> str; print 1st word
    //! cin.getline(str, 100, '$'); // full sentence // 3re argument is delimeter
    //! cout << "Entered character: " << str << endl;

    //? for loop 

    //* char str[] = "Hello world";
    //* int len = 0;
    //* for (int i = 0; i < str[i]; i++) {
    //*     len++;
    //* }
    //* cout << "Length of string: " << len << endl;

    //* char str[12];
    //* cin.getline(str, 12);
    //* for(char ch : str) {
    //*     cout << ch << " ";
    //* }
    //* cout << endl;

    //? String

    //* string str = "Apna College University"; // Continuous memory allocation
    //* cout << str << endl;
    //* cout << str.length() << endl;
    //* str = "Niyamul Hasan University";
    //* cout << str << endl;
    //* cout << str.length() << endl;
    
    //? Loops on a string;

    //* string str = "Hello World";
    //* for(int i = 0; i < str.length(); i++) {
    //*     cout << str[i] << " ";
    //* }
    //* cout << endl;

    //? Reverse on a character;

    //? Reverse on a string;

    string str = "Hello World";
    reverse(str.begin(), str.end()); // iterrators
    cout << str << endl;

    return 0;
}