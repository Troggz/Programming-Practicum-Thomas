#include <iostream>
#include <cmath>
using namespace std;

 
int main()
{
    long a = 1;
    long b = 5;
    long c = 7;
    cout<<"input first linear equation: ax + by = c"<<endl;
    cout<<"Enter variable a=  "<<a<<endl;              
    cout<<"Enter variable b=  "<<b<<endl;
    cout<<"Enter variable c=  "<<c<<endl;


                                                             
    long discriminant = b*b - (4*a*c);                      
    long x1, x2;
    if (discriminant > 0){                                  
        x1 = (-b + sqrt(discriminant))/(2*a);           
        x2 = (-b - sqrt(discriminant))/(2*a);
        cout<<"Output          : "<<"there are two distince real roots = "<<x1<<" and "<<x2<<endl;
    }else if (discriminant < 0){
        x1 = (-b)/(2*a);                             
        cout<<"Output          : "<<"there is exactly one real root = "<<x1<<endl;
    }else{
        cout<<"Output          : "<< "There are no real roots";                     
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
