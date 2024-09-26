#include <iostream>
#include <string>
#include <vector>

using namespace std;

//first we make a vector function which would be in string form while the function itself retrieves interger value "n"
vector<string> fizzBuzz(int n){
//we initialize "result" as vector so we can use it in later conditions
    vector<string> result;
//This for loop is used make a list of numbers which incrementally increase by one each loop
    for (int i = 1; i <= n; ++i) {

        //This if statement checks if 'i' is divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {

        //If it is then it would push back a word which is 'FizzBuzz' rather than the number
            result.push_back("FizzBuzz");
        }

        //This if statement checks if 'i' is divisible by 3
        else if (i % 3 == 0) {

        //If it is then it would push back a word which is 'Fizz' rather than the number
            result.push_back("Fizz");
        }

        //This if statement checks if 'i' is divisible by 5
        else if (i % 5 == 0) {

        //If it is then it would push back a word which is 'Buzz' rather than the number
            result.push_back("Buzz");
        }
        //This else staement concludes when all the if statements aren't fulfilled
        else {

        //When it does happen it will push back the iteration of 'i' which will then be converted into string form
            result.push_back(to_string(i));
        }
    }

    return result;
}
//This Function will be used to make the output of the previous function as 1 whole string including spaces so we can compare it with expected results
//This function will take in a constant non changing vector with each elements being a string which is the output of 'result' in the previous function
string joinVector(const vector<string>& vec) {
    string resultString = "";
//Then we make a for loop to add spaces between the elements in the previous function
//This function will read each element of the vector by incrementing i which is based on the size of the vector
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i != 0) {
            resultString += " ";  // Add space between elements
        }
        resultString += vec[i];
    }
    return resultString;
}

int main() {
//declare the value of n which will be used in 'fizzbuzz' function
    int n = 100;  

 // we declare that the 'result' vector equals to the output of 'fizzbuzz' function with the arguemnt of n
    vector<string> result = fizzBuzz(n);

// we declare that 'resultString' string equals to the output of 'joinVector' Function with the argument of the result
    string resultString = joinVector(result);

//We define the expected output to be compared later on
    string expectedOutput = "1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz";

    cout<<"Expected Result = "<<endl<<expectedOutput<<endl;

//This if statement compares the 'resultString' with the 'expectedoutput'
    if (resultString == expectedOutput) {
//When they are both equal it will output "Test Passed"
        cout << "Test Passed" << endl;
    } else {
//When they are not equal it will output "Test Failed" and also the result to compare what went wrong.
        cout << "Test Failed." << endl;
        cout << "Result: " << resultString << endl;
    }

    return 0;
}