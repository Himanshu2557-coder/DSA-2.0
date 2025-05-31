// what is functiosn call stack in c++
#include<iostream>
using namespace std;
// function to return sum of 3 numbers using input parameters
int printSum(int a, int b, int c) {
    cout << "Sum: " << a + b + c << endl;
    return a + b + c; // returning the sum of three numbers 
}
int main()
{
    // Function call stack is a data structure that stores information about the active subroutines of a computer program.
    // It is used to keep track of function calls, local variables, and return addresses.
    
    // When a function is called, a new frame is pushed onto the stack.
    // This frame contains the function's parameters, local variables, and the return address.
    
    // When the function returns, its frame is popped from the stack, and control returns to the calling function.
    
    // The call stack helps manage function calls and ensures that each function can access its own local variables.
    
    int ans = printSum(5, 10, 15); // Calling the function with three parameters
    cout << "The sum of the three numbers is: " << ans << endl; // Output the result
    return 0;
}