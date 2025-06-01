// functions in cpp
#include<iostream>
using namespace std;
void printLine() {
    for(int i = 0; i < 10; i++) {
        cout << "Himanshu is OP" << endl;
    }
    cout << "Himanshu is OP" << endl;
}

void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main(){
    printLine();
    add(5, 10);
    return 0;
}