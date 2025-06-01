#include <iostream>
#include <vector>
#include <utility> // for pair
using namespace std;

int main() {
    // 1. Basic Vector of Integers
    vector<int> v1 = {1, 2, 3, 4, 5};
    v1.push_back(6);            // Add element
    v1.pop_back();              // Remove last element
    cout << "v1 -> size: " << v1.size() << ", capacity: " << v1.capacity() << endl;

    // 2. Vector of Strings
    vector<string> v2 = {"apple", "banana", "cherry"};
    v2.push_back("date");
    v2.pop_back();              // Deletes "date"
    cout << "v2 -> size: " << v2.size() << ", capacity: " << v2.capacity() << endl;

    // 3. Vector of Pairs
    vector<pair<int, int>> v3 = {{1, 2}, {3, 4}};
    v3.push_back({5, 6});
    v3.pop_back();              // Deletes {5, 6}
    cout << "v3 -> size: " << v3.size() << ", capacity: " << v3.capacity() << endl;

    // 4. Vector of Vectors (2D Vector)
    vector<vector<int>> v4;
    v4.push_back({1, 2});
    v4.push_back({3, 4, 5});
    v4.pop_back();              // Deletes second row
    cout << "v4 -> size: " << v4.size() << ", capacity: " << v4.capacity() << endl;

    // 5. Vector with Predefined Size and Default Value
    vector<int> v5(5, 10);      // 5 elements = 10
    v5.push_back(20);
    v5.pop_back();              // Deletes 20
    cout << "v5 -> size: " << v5.size() << ", capacity: " << v5.capacity() << endl;

    // 6. Empty Vector + Push Back
    vector<int> v6;
    for (int i = 0; i < 5; ++i)
        v6.push_back(i * i);    // 0, 1, 4, 9, 16
    v6.pop_back();              // Deletes 16
    cout << "v6 -> size: " << v6.size() << ", capacity: " << v6.capacity() << endl;

    // 7. Vector from Array
    int arr[] = {10, 20, 30};
    vector<int> v7(arr, arr + 3);
    v7.push_back(40);
    v7.pop_back();              // Deletes 40
    cout << "v7 -> size: " << v7.size() << ", capacity: " << v7.capacity() << endl;

    // 8. Using assign()
    vector<int> v8;
    v8.assign(4, 7);            // 7, 7, 7, 7
    v8.push_back(9);
    v8.pop_back();              // Deletes 9
    cout << "v8 -> size: " << v8.size() << ", capacity: " << v8.capacity() << endl;

    // 9. Vector of bool
    vector<bool> v9 = {true, false, true};
    v9.push_back(false);
    v9.pop_back();              // Deletes false
    cout << "v9 -> size: " << v9.size() << ", capacity: " << v9.capacity() << endl;

    // 10. Vector of Custom Structs
    struct Student {
        string name;
        int age;
    };
    vector<Student> v10 = {{"Alice", 20}, {"Bob", 22}};
    v10.push_back({"Charlie", 19});
    v10.pop_back();             // Deletes Charlie
    cout << "v10 -> size: " << v10.size() << ", capacity: " << v10.capacity() << endl;

    // 11. Vector of Pointers
    vector<int*> v11;
    int a = 5, b = 10;
    v11.push_back(&a);
    v11.push_back(&b);
    v11.pop_back();             // Deletes pointer to b
    cout << "v11 -> size: " << v11.size() << ", capacity: " << v11.capacity() << endl;

    // 12. 3D Vector
    vector<vector<vector<int>>> v12(2, vector<vector<int>>(2, vector<int>(2, 0)));
    v12.push_back(vector<vector<int>>(2, vector<int>(2, 1)));
    v12.pop_back();             // Deletes last 3D block
    cout << "v12 -> size: " << v12.size() << ", capacity: " << v12.capacity() << endl;

    // Optional: Print one example for verification
    cout << "\nContents of v1: ";
    for (int x : v1) cout << x << " ";
    cout << "\n";

    // IF I WANT TO CLEAR ALL VECTORS
    // v1.clear();
    // v2.clear();
    // v3.clear();
    // v4.clear();
    // v5.clear();
    // v6.clear();
    // v7.clear();
    // v8.clear();
    // v9.clear();
    // v10.clear();
    // v11.clear();
    // v12.clear();
    // cout << "All vectors cleared.\n";
    // SIZE WOULD BE 0 AFTER CLEARING
    // cout << "All vectors cleared.\n";
    // cout << "v1 -> size: " << v1.size() << ", capacity: " << v1.capacity() << endl;
    // cout << "v2 -> size: " << v2.size() << ", capacity: " << v2.capacity() << endl;


    return 0;
}
