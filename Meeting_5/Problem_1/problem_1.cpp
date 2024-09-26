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

int main(){
//We declare how many numbers we want in the list, inthis case 100
    int n = 100 ;
//we declare that 'result' will be the result of the function 'fizzbuzz' withthe argument 'n' being 100.
    vector<string> result = fizzBuzz(n);
//Then we make a for loop to output the list of numbers where in each iteration of 'result' vector s would take in the result 
//(a number, fizz, buzz, or fizzbuzz)
    for (string s : result) {
        cout << s << " ";
    }
    return 0;
}