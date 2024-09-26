#include <iostream>
#include <fstream>

using namespace std;

int main(){     
int input = 5;
cout<<"Input = "<<input<<endl;
int Num;
string Output;

	for(int i=1;i<=10;i++)
	{
	Num = input*i;
	cout<<input<<" x "<< i <<" = "<<Num<<endl;
	Output += (to_string(Num)+" ");
	
    }
if (Output == "5 10 15 20 25 30 35 40 45 50 "){
	cout<<"Test Successful"<<endl;

}
else{
	cout<<"Test Failed"<<endl;
}

return 0;
}