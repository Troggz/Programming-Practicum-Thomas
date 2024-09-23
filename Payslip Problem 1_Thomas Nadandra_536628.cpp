# include <iostream> 
# include <string>
using namespace std;

 // This Function is used to get input from the user
 long getInput ( string prompt ) {
 long value ;
 cout << prompt ;
 cin >> value ;
 return value ;
 }
 
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
 string name;
 cout<<"Enter Employee Name = ";
 getline(cin, name);//this function is used to be able to input full name
//calls the getInput function to input gross salary, installment, and insurance
 long gross = getInput ("Enter Gross Salary = ") ; 
 long install = getInput ("Enter installment = ") ;
 long insurance = getInput ("Enter insurance = ");
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

 return 0; // End of the program
 }