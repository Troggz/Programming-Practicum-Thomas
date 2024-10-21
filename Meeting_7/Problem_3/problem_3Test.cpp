#include <iostream>
using namespace std;

double GCD (int x,int y){
    if(x % y == 0)
    return y;
    else
    return GCD (y, (x % y));
}
int main(){
int x = 35;
int y = 20;
int gcdCheck = 5;
cout<<"Input First Number = "<<x;
cout<<endl;
cout<<"Input Second Number = "<<y;
cout<<endl;
cout<<"The Greater Common Divisor (GCD) = "<<GCD(x,y)<<endl;

if(gcdCheck == GCD(x,y))
    cout<<"****TEST PASSED****"<<endl;
else
    cout<<"****TEST FAILED****"<<endl;

    return 0;
}