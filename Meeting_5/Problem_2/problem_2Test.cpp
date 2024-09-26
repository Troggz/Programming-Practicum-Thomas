#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Predefined vector
    vector<int> vec = {1, 2, 3, 4, 5};

    // Reverse the vector in-place using a loop
    int n = 5;
    for (int i = 0; i < n / 2; ++i) {
        swap(vec[i], vec[n - i - 1]);  // Swap elements from start and end
    }


    string result = "";
    for (int i = 0; i < n; ++i) {
        result += to_string(vec[i]);  // Append the number as a string
        if (i != n - 1) {
            result += " ";  // Add a space after each element except the last
        }
    }
string expectedOutput = "5 4 3 2 1";

cout<<"Expected Output = "<<expectedOutput<<endl;

if(expectedOutput == result){
    cout<<"Test Passed!"<<endl;
    }
 else{
    cout<<"Test Failed"<<endl;
    cout<<"Output = "<<result;
}

    return 0;
}