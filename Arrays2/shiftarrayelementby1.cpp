#include<iostream>
using namespace std;
// left shift the array by 1 position
void shiftarray(int arr[] , int n){
    int temp = arr[0]; // Store the first element
    for(int i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    arr[n - 1] = temp; // Place the first element at the end

}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    shiftarray(arr, n);

    cout << "Array after shifting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
    