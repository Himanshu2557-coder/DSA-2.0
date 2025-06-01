#include<iostream>
using namespace std;
int main() {
    // Declare an array of integers with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};
    // Print the size of the array
    cout << "Size of the array: " << sizeof(arr) / sizeof(arr[0]) << endl;
    // Print the first element of the array
    cout << "First element of the array: " << arr[0] << endl;

    // Modify the second element of the array
    arr[1] = 25;
    // Print the modified second element
    cout << "Modified second element of the array: " << arr[1] << endl;

    // Print the entire array using a loop
    cout << "Elements of the array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // operations on the array
    // Find the maximum element in the array
    int maxElement = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    cout << "Maximum element in the array: " << maxElement << endl;

    // Find the minimum element in the array
    int minElement = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    cout << "Minimum element in the array: " << minElement << endl;


    // Calculate the sum of all elements in the array
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "Sum of all elements in the array: " << sum << endl;
    


    // Calculate the average of the elements in the array
    double average = static_cast<double>(sum) / 5;
    cout << "Average of the elements in the array: " << average << endl;

    // Reverse the array
    for(int i = 0; i < 5 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[5 - 1 - i];
        arr[5 - 1 - i] = temp;
    }
    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    

    // Print the elements of the array using a loop
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}