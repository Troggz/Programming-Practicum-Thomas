#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    vector<int> vec = {1, 2, 3, 4, 5};

    
    int n = 5;
    for (int i = 0; i < n / 2; ++i) {
        swap(vec[i], vec[n - i - 1]);  
    }


    string result = "";
    for (int i = 0; i < n; ++i) {
        result += to_string(vec[i]);  
        if (i != n - 1) {
            result += " ";  
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