#include <iostream>
#include <cmath>
using namespace std;



 double getInput ( string prompt ) {
 double value ;
 cout << prompt ;
 cin >> value ; 
 return value ;
 }
 
int main()
{
    cout<<"input first linear equation: ax + by = c"<<endl;
    long a = getInput ("Enter variable a=  ");               
    long b = getInput ("Enter variable b=  ");
    long c = getInput ("Enter vairable c=  ");


                           
    long discriminant = b*b - (4*a*c);                       

    if (discriminant > 0){                                    
        long x1 = (-b + sqrt(discriminant))/(2*a);           
        long x2 = (-b - sqrt(discriminant))/(2*a);
        cout<<"there are two distince real roots = "<<x1<<" and "<<x2<<endl;
    }else if (discriminant < 0){
        long x3 = (-b)/(2*a);   1;                         
        cout<<"there is exactly one real root = "<<x3<<endl;
    }else{
        cout<<"There are no real roots";                      
    }

    
    return 0;               
}
