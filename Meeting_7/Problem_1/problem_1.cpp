#include <iostream>
using namespace std;
double a, b, x, y;
int t;
double addition(double a, double b){
    double result = (a+b);
    cout<<result<<endl;
    return result;
}

double substraction(double x, double y){
    double result = (x-y);
    cout<<result<<endl;
    return result;
}

double decide (int t){
    if(t == 1){
        cout<<"Substraction"<<endl<<"----------------------------"<<endl;
        cout<<"a - b"<<endl;
        cout<<"a = ";
        cin>>a;
        cout<<"b = ";
        cin>>b;
        substraction(a,b);
    }
    else if(t == 2){
        cout<<"Addition"<<endl<<"----------------------------"<<endl;
        cout<<"a + b"<<endl;
        cout<<"a = ";
        cin>>x;
        cout<<"b = ";
        cin>>y;
        addition(x,y);
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