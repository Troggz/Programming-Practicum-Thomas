#include <iostream>
#include <fstream>
#include <string>
#include <vector>


std::vector <std::string> Output(int input){
    std::vector <std::string> Output;
	for(int i=1;i<=10;i++)
	{
	std::cout<<input<<" x "<< i <<" = "<<(input*i)<<std::endl;
    }
return Output;
}

int main(){
std::vector <std::string> test = Output(4);


return 0;
}