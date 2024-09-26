#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n){
  
    vector<string> result;

    for (int i = 1; i <= n; ++i) {

        // Check if i is divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {

            // Add "FizzBuzz" to the result vector
            result.push_back("FizzBuzz");
        }

        // Check if i is divisible by 3
        else if (i % 3 == 0) {

            // Add "Fizz" to the result vector
            result.push_back("Fizz");
        }

        // Check if i is divisible by 5
        else if (i % 5 == 0) {

            // Add "Buzz" to the result vector
            result.push_back("Buzz");
        }
        else {

            // Add the current number as a string to the
            // result vector
            result.push_back(to_string(i));
        }
    }

    return result;
}

int main(){
    int n ;
    cout<<"How many Number of "
    vector<string> result = fizzBuzz(n);
    for (const string& s : result) {
        cout << s << " ";
    }
    return 0;
}