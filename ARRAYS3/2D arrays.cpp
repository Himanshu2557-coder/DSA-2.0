#include<iostream>
using namespace std;
int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the elements of the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Accessing a specific element
    cout << "Element at arr[1][2]: " << arr[1][2] << endl; // Should print 7
    // Modifying an element
    arr[2][3] = 20; // Changing the last element to 20
    cout << "Modified element at arr[2][3]: " << arr[2][3] << endl; // Should print 20
    // Print the modified 2D array
    cout << "Modified 2D array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Demonstrating the size of the 2D array
    cout << "Size of the 2D array: " << sizeof(arr) << " bytes" << endl;
    cout << "Number of rows: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "Number of columns: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


    

    return 0;
}