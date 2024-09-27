#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){     
int input, Num;
cout<<"Input = ";
cin>>input;
cout<<"Output = "<<endl;


	for(int i=1;i<=10;i++)
	{
	Num = input*i;
	cout<<input<<" x "<< i <<" = "<<Num<<endl;
    }
return 0;
}