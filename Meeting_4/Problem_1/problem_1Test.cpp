#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){     
int limit = 5;
cout<<"Input = "<<limit<<endl;

	int increment = 1;
    int num = 0;
	for(int i=1;i<=limit;i++)
	{
	num += increment;
	increment++;
    }
cout<<"Output = "<<num<<endl;



int expectedresults = 15;

cout<<"Expected Output = "<<expectedresults<<endl;
if (expectedresults == num) {
    cout<<"Explanation = 1 + 2 + 3 + 4 + 5  =  15"<<endl;
    cout<<"test passed"<<endl;

  } else
    cout<<"test failed"<<endl;

    return 0;
}
