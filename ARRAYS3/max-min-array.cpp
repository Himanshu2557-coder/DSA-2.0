#include<iostream>
using namespace std;
int main(){
    // Declare a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Initialize min and max variables
    int minVal = arr[0][0];
    int maxVal = arr[0][0];

    // Find the minimum and maximum values in the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }

    // Print the minimum and maximum values
    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}