#include <iostream>
#include <vector>
using namespace std;

int main() {
//First we would declare int 'n' to set the size of the vector
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;  

//Declaring the size of the vector depending on 'n'
    vector<int> vec(n); 

//This function is used so taht the user can input each element of the vector 
    cout << "Enter the elements of the vector: ";
//for every iteration of 'i' the user will input a number which would be part of the vector
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

//This for loop is used to swap the position of the elements from the start and end, using the 'swap'  command 
    for (int i = 0; i < n / 2; ++i) {
//this swap function makes it so that it swaps the position of an element in the vector with its correspondent using the formula below
        swap(vec[i], vec[n - i - 1]);  
    }

//This loop is used to output the vector since vectors have more than 1 element then it needs to be looped
    cout << "Reversed vector: ";
//we use int 'num' which is in the range of the vector above and for all integer in the vector it will be outputed 1 by 1 using this loop
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}