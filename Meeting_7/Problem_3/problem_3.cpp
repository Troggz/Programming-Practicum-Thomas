#include <iostream>
using namespace std;

double GCD (int x,int y){
    if(x % y == 0)
    return y;
    else
    return GCD (y, (x % y));
}
int main(){
int x, y;
cout<<"Input First Number = ";
cin>>x;
cout<<endl;
cout<<"Input Second Number = ";
cin>>y;
cout<<endl;
cout<<"The Greater Common Divisor (GCD) = "<<GCD(x,y)<<endl;
}