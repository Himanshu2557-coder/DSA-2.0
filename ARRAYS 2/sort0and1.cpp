#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count0 = 0, count1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count0++;
        } else {
            count1++;
        }
    }
    cout << "Sorted array: ";
    for(int i = 0; i < count0; i++){
        cout << "0 ";
    }
    for(int i = 0; i < count1; i++){
        cout << "1 ";
    }
    cout << endl;
    return 0;
    
}