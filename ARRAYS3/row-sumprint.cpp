#include<iostream>
using namespace std;
int main() {
    // Declare a 2D array with 3 rows and 4 columns
    // done 
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the sum of each row
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }

    return 0;
}