#include <iostream>
#include <cmath>
using namespace std;

 
int main()
{
    long a = 1;
    long b = 5;
    long c = 7;
    cout<<"input first linear equation: ax + by = c"<<endl;
    cout<<"Enter variable a=  "<<a<<endl;                  //here we call back the getInput function so the user can input the coefficient of the equation
    cout<<"Enter variable b=  "<<b<<endl;
    cout<<"Enter variable c=  "<<c<<endl;


                                                              //After recieving the input it will go to the formula below to find the discriminant
    long discriminant = b*b - (4*a*c);                        //This is the formula of the discriminant which will be used for the following formula
    long x1, x2;
    if (discriminant > 0){                                    //Here we have a conditional depending on the value of the discriminant which would use different formulas
        x1 = (-b + sqrt(discriminant))/(2*a);            //these are the formula when the discrimant is more than 0
        x2 = (-b - sqrt(discriminant))/(2*a);
        cout<<"Output          : "<<"there are two distince real roots = "<<x1<<" and "<<x2<<endl;
    }else if (discriminant < 0){
        x1 = (-b)/(2*a);                              //this is the formula if the discriminant is less than 0
        cout<<"Output          : "<<"there is exactly one real root = "<<x1<<endl;
    }else{
        cout<<"Output          : "<< "There are no real roots";                      // this is what will be outputed if the discriminant is equal to 0
    }

long ExpectedOutput = -2;
cout<<"Expected Output : there is exactly one real root = -2"<<endl;
if (ExpectedOutput == x1){
    cout<<"Test Passed"<<endl;
    }
    else {
    cout<<"Test Failed"<<endl;
    }
    return 0;               
}
