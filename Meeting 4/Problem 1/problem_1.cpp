#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
int limit;
cout<<"Input = ";
cin>>limit;
	int increment = 1;
    int num = 0;
	for(int i=1;i<=limit;i++)
	{
	num += increment;
	increment++;
    }
cout<<"Output = "<<num<<endl;

return 0;
}
