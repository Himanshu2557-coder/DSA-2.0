#include<iostream>
using namespace std;
int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the sum of each column
    for (int j = 0; j < 4; j++) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << sum << endl;
    }

    return 0;
}