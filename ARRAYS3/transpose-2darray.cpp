#include <iostream>
using namespace std;

int main() {
    const int rows = 2, cols = 3;
    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int transpose[cols][rows];

    // Transposing the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output the transposed matrix
    cout << "Transposed Matrix:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
