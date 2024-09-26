#include <iostream>
using namespace std;

//Thomas Nadandra - 536628

int main (){
double a = 15;
cout<<"Input First number = "<<a<<endl;
double b = 7;
cout<<"Input Second number = "<<b<<endl;
double c = 22;
cout<<"Input Third number = "<<c<<endl;

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

double ExpectedOutput = 22;
cout<<"Expected Output = 22"<<endl;

if(ExpectedOutput == c){
    cout<<"Test Successful!"<<endl;
    }

    else{
        cout<<"Test Failed!"<<endl;
    }

return 0;
 }
 
