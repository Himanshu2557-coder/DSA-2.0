#include <iostream>
#include <vector>
#include <utility> // for pair
using namespace std;

int main() {
    // 1. Basic Vector of Integers
    vector<int> v1 = {1, 2, 3, 4, 5}; // Vector of integers
    v1.push_back(6); // Adding an element at the end

    // 2. Vector of Strings
    vector<string> v2 = {"apple", "banana", "cherry"}; // Vector of strings

    // 3. Vector of Pairs
    vector<pair<int, int>> v3 = {{1, 2}, {3, 4}}; // Vector containing pairs
    v3.push_back({5, 6});

    // 4. Vector of Vectors (2D Vector)
    vector<vector<int>> v4 = {{1, 2}, {3, 4, 5}}; // A matrix-like structure

    // 5. Vector with Predefined Size and Default Value
    vector<int> v5(5, 10); // 5 elements initialized with value 10

    // 6. Empty Vector and Using push_back
    vector<int> v6;
    for (int i = 0; i < 5; ++i) {
        v6.push_back(i * i); // push_back inserts at the end
    }

    // 7. Vector Initialized Using an Array
    int arr[] = {10, 20, 30};
    vector<int> v7(arr, arr + 3); // Constructs from range of array

    // 8. Vector Using Assign Function
    vector<int> v8;
    v8.assign(4, 7); // Assigns 4 elements with value 7

    // 9. Vector of bool (special case, space optimized)
    vector<bool> v9 = {true, false, true};

    // 10. Vector of Custom Structs
    struct Student {
        string name;
        int age;
    };

    vector<Student> v10 = {{"Alice", 20}, {"Bob", 22}};
    v10.push_back({"Charlie", 19});

    // 11. Vector of Pointers
    vector<int*> v11;
    int a = 5, b = 10;
    v11.push_back(&a);
    v11.push_back(&b);

    // 12. Vector with Nested Vectors (3D Vector)
    vector<vector<vector<int>>> v12(2, vector<vector<int>>(2, vector<int>(2, 0))); // 2x2x2 filled with 0s

    // Print some results to verify
    cout << "v1: ";
    for (int x : v1) cout << x << " ";
    cout << endl;

    cout << "v3 (pairs): ";
    for (auto &p : v3) cout << "(" << p.first << "," << p.second << ") ";
    cout << endl;

    cout << "v4 (2D):\n";
    for (auto &row : v4) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }

    cout << "v10 (Students):\n";
    for (auto &s : v10) cout << s.name << ": " << s.age << endl;

    return 0;
}
