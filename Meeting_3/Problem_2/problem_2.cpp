#include <iostream>
using namespace std;


 double getInput ( string prompt ) { 
 double value ;
 cout << prompt ;
 cin >> value ; 
 return value ;
 }

int main (){
double a = getInput ("Input first number = "); 
double b = getInput ("Input Second number = ");
double c = getInput ("Input Third number = ");

if (a >=b) { 

    if (a>=c) { 
    cout<<"the largest number is = "<<a<< endl;    
    }

    else {  
    cout<<"the largest number is = "<<c<< endl;
    }
}  
else{ 
    if (b >=c ){ 
    cout<< "the largest number is = "<<b<< endl;
    }
    else { 
        cout<<"the largest number is = "<<c<< endl;
    }
} 

return 0;
 }
 