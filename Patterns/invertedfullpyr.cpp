#include<iostream>
using namespace std;
int main(){
    // inverted full pyramid
    int n;
    cin >> n;
    for(int row = 0; row < n; row++){
        // Print spaces
        for(int col = 0; col < row; col++){
            cout << " ";
        }
        // star printing    
        for(int col = 0; col < n - row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}