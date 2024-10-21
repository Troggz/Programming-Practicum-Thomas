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

double decide (int t){
    if(t == 1){
        cout<<"Substraction "<<"(a - b)"<<endl<<"----------------------------"<<endl;
        cout<<"a = ";
        cin>>a;
        cout<<"b = ";
        cin>>b; cout<<endl;
        cout<<a<<" - "<<b<<" = "<<substraction(a,b)<<endl;
    }
    else if(t == 2){
        cout<<"Addition "<<"(a + b)"<<endl<<"----------------------------"<<endl;
        cout<<"a = ";
        cin>>x;
        cout<<"b = ";
        cin>>y; cout<<endl;
        cout<<x<<" + "<<y<<" = "<<addition(x,y)<<endl;
    }
    return 0;
}

int main(){
    cout<<"What would you like to do? (1 for substraction | 2 for addition)"<<endl;
    cin>>t;
    cout<<endl;

    while(t != 1 && t != 2){
        cout<<"Please Input = 1 (substraction) or 2 (addition)"<<endl;
        cin>>t;
    }

decide (t);

}