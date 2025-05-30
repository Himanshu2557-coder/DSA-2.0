#include<iostream>
using namespace std;
int main(){
   // rectangle pattern
    for(int i = 1; i <= 3; i++) // outer loop for rows
    {
        for(int j = 1; j <= 5; j++) // inner loop for columns
        {
            cout << "* ";
        }
        cout << endl; // move to the next line after each row
    }
    return 0;
}