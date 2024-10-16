#include <iostream>
using namespace std;

struct Student { 
    string NIM; 
    float UTS;
    float UAS; 
};

int n ;
int main() {  
    cout<<"Enter the number of students : "; 
    cin>>n; 
    cout<<endl;

    while(n>50){
    cout<<"The maximum number of students is 50"<<endl<<"Enter the number of students : ";
    cin>>n;
    }

    cout<<"Data mahasiswa"<<endl; 

Student theStudent[n];
for (int i=0;i<n;i++) {  
    cout<<"NIM : "; 
    cin>>theStudent[i].NIM;   
    cout<<"Enter UTS value : "; 
    cin>>theStudent[i].UTS; 
    cout<<"Enter UTS value : "; 
    cin>>theStudent[i].UAS; 
}
float avg[n];
for (int i = 0;i < n;i++){
    avg[i]= (theStudent[i].UTS + theStudent[i].UAS)/2;
}
cout<<endl<<"Data Mahasiswa "<<endl<<"===================================="<<endl;

for (int i = 0; i < n ;i++){
    cout<<i + 1<<"."<<endl;
    cout<<"NIM = "<<theStudent[i].NIM<<endl;
    cout<<"Average score = "<<avg[i]<<endl;

}

}
