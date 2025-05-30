#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20, c = 30;

    // Using if-else statements

    if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (b > c) {
        cout << "b is greater than c" << endl;
    } else {
        cout << "c is the greatest" << endl;
    }

    // Using nested if-else statements
    if (a > b) {
        if (a > c) {
            cout << "a is the greatest" << endl;
        } else {
            cout << "c is the greatest" << endl;
        }
    } else {
        if (b > c) {
            cout << "b is the greatest" << endl;
        } else {
            cout << "c is the greatest" << endl;
        }
    }

    // Using ternary operator

    int max = (a > b) ? a : b;
    cout << "Maximum of a and b is: " << max << endl;
    cout << "Maximum of a, b, and c is: " << ((a > b && a > c) ? a : (b > c ? b : c)) << endl;
    cout << "Minimum of a, b, and c is: " << ((a < b && a < c) ? a : (b < c ? b : c)) << endl;
    cout << "Sum of a, b, and c is: " << (a + b + c) << endl;
    cout << "Product of a, b, and c is: " << (a * b * c) << endl;
    cout << "Average of a, b, and c is: " << ((a + b + c) / 3.0) << endl;
    cout << "Difference between a and b is: " << (a - b) << endl;
    cout << "Difference between b and c is: " << (b - c) << endl;

    // Using logical operators
    if ((a < b) && (b < c)) {
        cout << "a is less than b and b is less than c" << endl;
    } else if ((a > b) || (b > c)) {
        cout << "Either a is greater than b or b is greater than c" << endl;
    } else {
        cout << "Neither condition is true" << endl;
    }
    

    // Using switch-case statement
    int choice = 2;
    switch (choice) {
        case 1:
            cout << "You chose option 1" << endl;
            break;
        case 2:
            cout << "You chose option 2" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    // Using for loop
    for (int i = 0; i < 5; i++) {
        cout << "Iteration: " << i << endl;
    }

    // Using while loop
    int j = 0;
    while (j < 5) {
        cout << "While loop iteration: " << j << endl;
        j++;
    }

    return 0;
}