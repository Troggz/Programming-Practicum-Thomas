#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){     
int input;

cout<<"Input = ";
cin>>input;
cout<<"Output = "<<endl;

	for(int i=1;i<=10;i++)
	{
	cout<<input<<" x "<< i <<" = "<<(input*i)<<endl;
    }
return 0;
}