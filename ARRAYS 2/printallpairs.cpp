#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "All possible pairs:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ")\n";
        }
    }

    return 0;
}
