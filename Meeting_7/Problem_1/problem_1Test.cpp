#include <iostream>
using namespace std;
double a, b, x, y;
int t;
double addition(double a, double b){
    double result = (a+b);
    return result;
}

double substraction(double x, double y){
    double result = (x-y);
    return result;
}


int main(){
a = 10;
b = 5;
x = 15;
y = 20;
double subCheck = 5;
double addCheck = 35;

cout<<"Substraction"<<endl<<"----------------------------"<<endl;
cout<<"a - b"<<endl;
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;
cout<<"a - b = "<<substraction(a,b)<<endl;
if(substraction(a,b) == subCheck){
    cout<<"Test Passed"<<endl;
}
else{
    cout<<"Test Failed"<<endl;
}
cout<<endl;
cout<<"Addition"<<endl<<"----------------------------"<<endl;
cout<<"a + b"<<endl;
cout<<"a = "<<x<<endl;
cout<<"b = "<<y<<endl;
cout<<"a + b = "<<addition(x,y)<<endl;

if(addition(x,y) == addCheck){
    cout<<"Test Passed"<<endl;
}
else{
    cout<<"Test Failed"<<endl;
}





}