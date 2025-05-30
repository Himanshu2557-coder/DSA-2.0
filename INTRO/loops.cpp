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

    // Using do-while loop
    int k = 0;
    do {
        cout << "Do-while loop iteration: " << k << endl;
        k++;
    } while (k < 5);



    // Using while loop
    int j = 0;
    while (j < 5) {
        cout << "While loop iteration: " << j << endl;
        j++;
    }
    // Using break and continue statements
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            cout << "Breaking the loop at i = " << i << endl;
            break; // Breaks the loop when i is 5
        }
        cout << "Loop iteration: " << i << endl;
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            cout << "Skipping even number: " << i << endl;
            continue; // Skips the rest of the loop body for even numbers
        }
        cout << "Odd number: " << i << endl;
    }
    // Using range-based for loop
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Using range-based for loop:" << endl;
    for (int num : arr) {
        cout << "Array element: " << num << endl;
    }
    // Using nested loops
    cout << "Using nested loops:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i: " << i << ", j: " << j << endl;
        }
    }
    // Using loop control variables
    int loopControl = 0;
    for (int i = 0; i < 5; i++) {
        loopControl += i;
        cout << "Loop control variable value: " << loopControl << endl;
    }

    // Using break and continue in nested loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                cout << "Breaking inner loop at i = " << i << ", j = " << j << endl;
                break; // Breaks the inner loop when i equals j
            }
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

    // infinite loop example
    int count = 0;
    while (true) {
        cout << "Infinite loop iteration: " << count << endl;
        count++;
        if (count == 5) {
            cout << "Breaking infinite loop at count = " << count << endl;
            break; // Breaks the infinite loop after 5 iterations
        }
    }
    

    return 0;
}