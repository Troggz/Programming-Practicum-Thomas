#include <iostream>
using namespace std;

double factor(int x){
    if (x == 1)
        return (x); 
    else
        return(x * factor(x - 1));
}

int main(){

int x = 5;
cout<<"Input a number = "<< x <<endl;

double result = factor(x);
cout<<"The factorial of "<<x<<" = "<<result<<endl;

double factCheck = 120;

if (result == factCheck)
    cout<<"*****Test Passed*****"<<endl;
else
    cout<<"*****Test Failed*****"<<endl;
 
return 0;
}