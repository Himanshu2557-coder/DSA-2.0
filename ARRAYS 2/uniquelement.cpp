#include<iostream>
#include<array>
int main(){
    // using XOR operator to find unique element in an array
    std::array<int, 7> arr = {1, 2, 3, 2, 1, 4, 4};
    int unique = 0;
    for(int i = 0; i < arr.size(); i++){
        unique ^= arr[i];
    }
    std::cout << "The unique element is: " << unique << std::endl;
    return 0;
    

}