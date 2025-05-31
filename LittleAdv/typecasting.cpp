// what is typecasting in C++?
#include <iostream>
using namespace std;
int main() {
    // Implicit typecasting
    // Implicit typecasting occurs automatically when a value is assigned to a variable of a different type.
    // The compiler automatically converts the value to the appropriate type.
    // For example, when an integer is assigned to a double variable, the integer is automatically converted to a double.
    // This is done to prevent data loss and ensure that the value can be represented accurately in the new type.

    int a = 10;
    double b = a; // int to double
    cout << "Implicit typecasting (int to double): " << b << endl;

    // Explicit typecasting
    // Explicit typecasting is done manually by the programmer using a cast operator.
    // This is necessary when converting a value from a type that may lose precision or when converting between incompatible types.
    // For example, when a double is assigned to an int variable, the programmer must explicitly cast the double to an int.
    // This is done to ensure that the programmer is aware of the potential data loss that may occur during the conversion.
    // Explicit typecasting example

    double c = 9.99;
    int d = (int)c; // double to int
    cout << "Explicit typecasting (double to int): " << d << endl;

    // Typecasting with char
    
    char e = 'A';
    int f = (int)e; // char to int
    cout << "Typecasting char to int: " << f << endl;

    
    // Typecasting float to int
    // When converting a float to an int, the fractional part is truncated.

    float g = 5.75f;
    int h = (int)g; // float to int
    cout << "Typecasting float to int: " << h << endl;

    return 0;
}