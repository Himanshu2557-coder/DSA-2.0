#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int square = num * num;

    cout << "Square of " << num << " is " << square << endl;


    // datatypes
    // integer
    int integerNum = 42;
    cout << "Integer number: " << integerNum << endl;
    sizeof(integerNum); // size of integer in bytes
    // floating-point number
    float floatNum = 3.14f;
    cout << "Floating-point number: " << floatNum << endl;
    // character
    char character = 'A';
    cout << "Character: " << character << endl;
    // boolean
    bool isTrue = true;
    cout << "Boolean value: " << isTrue << endl;
    // string
    string str = "C++ Programming";
    cout << "String: " << str << endl;
    

    


    // datatype conversion
    double decimalNum = 5.75;
    int convertedNum = static_cast<int>(decimalNum);
    cout << "Converted number: " << convertedNum << endl;
    // using a constant
    const double PI = 3.14159;
    cout << "Value of PI: " << PI << endl;
    // using a variable
    int variableNum = 10;
    cout << "Value of variableNum: " << variableNum << endl;
    // using a string
    string text = "Hello, World!";
    cout << "Text: " << text << endl;

    // signed and unsigned integers
    signed int signedInt = -10;
    unsigned int unsignedInt = 10;
    cout << "Signed integer: " << signedInt << endl;
    cout << "Unsigned integer: " << unsignedInt << endl;
    

    return 0;

    

}