#include <iostream>
using namespace std;

double factor(int x){
    if (x == 1)
        return (x); 
    else
        return(x * factor(x - 1));
}

int main(){

int x;
cout<<"Input a number = ";
cin>>x;
double result = factor(x);
cout<<"The factorial of "<<x<<" = "<<result<<endl;
}