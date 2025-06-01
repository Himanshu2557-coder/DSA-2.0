#include<iostream>
#include <vector>
using namespace std;
int main(){
    // static array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Static Array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // dynamic array
    int n;
    cout << "Enter the size of the dynamic array: ";
    cin >> n;
    int* dynamicArr = new int[n];
    cout << "Enter " << n << " elements for the dynamic array: ";
    for(int i = 0; i < n; i++) {
        cin >> dynamicArr[i];
    }
    cout << "Dynamic Array: ";
    for(int i = 0; i < n; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;

    // Deallocate dynamic array
    delete[] dynamicArr;
    return 0;

    

    
    // Note: Uncomment the vector section to use vectors instead of arrays.
    // Note: This code demonstrates both static and dynamic arrays.
    // Note: The vector section is commented out to focus on arrays.
    // Note: Make sure to include the vector header if you decide to use vectors.
    // Note: This code is written in C++14 standard.
    // Note: The code uses standard input/output for demonstration purposes.
    // Note: Always remember to deallocate dynamic memory to avoid memory leaks.
    // Note: This code is a simple demonstration of arrays in C++.


}