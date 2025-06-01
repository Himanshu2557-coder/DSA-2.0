// bitwise operators
#include<iostream>

using namespace std;
int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    cout << "a & b: " << (a & b) << endl; // Bitwise AND
    cout << "a | b: " << (a | b) << endl; // Bitwise OR
    cout << "a ^ b: " << (a ^ b) << endl; // Bitwise XOR // same hua to 0, different hua to 1
    cout << "~a: " << (~a) << endl;       // Bitwise NOT
    cout << "a << 1: " << (a << 1) << endl; // Left shift // multiplies by 2
    cout << "b >> 1: " << (b >> 1) << endl; // Right shift // divides by 2
    cout << "a << 2: " << (a << 2) << endl; // Left shift by 2
    cout << "b >> 2: " << (b >> 2) << endl; // Right shift by 2
    cout << "a & 1: " << (a & 1) << endl; // Check if a is odd or even
    cout << "b | 1: " << (b | 1) << endl; // Set the least significant bit of b to 1
    cout << "a ^ 1: " << (a ^ 1) << endl; // Toggle the least significant bit of a
    cout << "a & 2: " << (a & 2) << endl; // Check if the second least significant bit of a is set
    cout << "b | 2: " << (b | 2) << endl; // Set the second least significant bit of b to 1
    cout << "a ^ 2: " << (a ^ 2) << endl; // Toggle the second least significant bit of a
    cout << "a & 4: " << (a & 4) << endl; // Check if the third least significant bit of a is set


    //pre-increment and post-increment
    int x = 10;
    
    cout << "Pre-increment: " << ++x << endl; // Increments x and then returns the value
    cout << "Post-increment: " << x++ << endl; // Returns the value of x and then increments it
    cout << "Value after post-increment: " << x << endl; // Shows the value after post-increment
    cout << "Pre-decrement: " << --x << endl; // Decrements x and then returns the value
    cout << "Post-decrement: " << x-- << endl; // Returns the value of x and then decrements it
    cout << "Value after post-decrement: " << x << endl; // Shows the value after post-decrement



    return 0;
}