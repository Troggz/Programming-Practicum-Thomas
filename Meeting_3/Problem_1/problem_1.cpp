#include <iostream>
#include <cmath>
using namespace std;


//this function is used to get the input from the user
 double getInput ( string prompt ) {
 double value ;
 cout << prompt ;
 cin >> value ; 
 return value ;
 }
 
int main()
{
    cout<<"input first linear equation: ax + by = c"<<endl;
    long a = getInput ("Enter variable a=  ");                //here we call back the getInput function so the user can input the coefficient of the equation
    long b = getInput ("Enter variable b=  ");
    long c = getInput ("Enter vairable c=  ");


                                                              //After recieving the input it will go to the formula below to find the discriminant
    long discriminant = b*b - (4*a*c);                        //This is the formula of the discriminant which will be used for the following formula

    if (discriminant > 0){                                    //Here we have a conditional depending on the value of the discriminant which would use different formulas
        long x1 = (-b + sqrt(discriminant))/(2*a);            //these are the formula when the discrimant is more than 0
        long x2 = (-b - sqrt(discriminant))/(2*a);
        cout<<"there are two distince real roots = "<<x1<<" and "<<x2<<endl;
    }else if (discriminant < 0){
        long x3 = (-b)/(2*a);   1;                            //this is the formula if the discriminant is less than 0
        cout<<"there is exactly one real root = "<<x3<<endl;
    }else{
        cout<<"There are no real roots";                      // this is what will be outputed if the discriminant is equal to 0
    }

    
    return 0;               
}
