# include <iostream> 
# include <string>
using namespace std;


//This function is used to convert the input from the user into the format of rupiah
string format(long int value) {
    string original = to_string(value);//This code changes the data type into string
    string format;
    for (int i = 0; i < original.length(); i++) {//this loop reads the amount of character in the value
        format += original[i];
        if (i != original.length() - 1 && (original.length() - i - 1) % 3 == 0) {//this code adds "." every 3 characters in the value
            format += '.';
        }
    }
    return format + ",00"; //this code adds the cent for rupiah
}


 int main() 
 { 
 string name = "Thomas Nadandra Aryawida" ;
 cout<<"Enter Employee Name = "<<name<<endl;
 long gross = 10000000;
 cout<<"Enter Gross Salary = "<<gross<<endl;
 long install = 200000;
 cout<<"Enter Installment = "<<install<<endl;
long insurance = 200000;
 cout<<"Enter Installment = "<<insurance<<endl;
//this is the formula for the tax
 long tax = 0.2 * gross;
//this is the formula for the net
 long net = gross - tax - install - insurance; // Calculate the sum of the two numbers
//the next few lines of code is used to output the payslip
 cout<<endl; 
 cout<<"Payslip for Employee"<<endl<<"----------------------"<<endl;
 cout<<"Name         : "<<name<<endl;
 cout<<"Gross Salary : Rp "<<format(gross)<<endl;
 cout<<"Tax (20%)    : Rp "<<format(tax)<<endl;
 cout<<"Installment  : Rp "<<format(install)<<endl;
 cout<<"insurance    : Rp "<<format(insurance)<<endl;
 cout<<"net salary   : Rp "<<format(net)<<endl;

if(tax == 2000000 && net == 7600000){
    cout<<"Test Successful!"<<endl;
}
    else{
    cout<<"Test Failed!"<<endl;
    }


return 0; // End of the program
 }