#include <iostream>
using namespace std;

struct Student { 
    string NIM; 
    float UTS;
    float UAS; 
};

int n = 3 ;

Student theStudent[n];
//TEST CASE
int (theStudent[0].nim) = 542313;
theStudent[0].UTS = 90;
theStudent[0].UAS = 95;

theStudent[1].nim = 672912;
theStudent[1].UTS = 80;
theStudent[1].UAS = 85;

theStudent[2].nim = 879123;
theStudent[2].UTS = 65;
theStudent[2].UAS = 75;

int main() {  
    cout<<"Enter the number of students : "<<n<<endl;
    cout<<"Data mahasiswa"<<endl; 

for (int i=0;i<n;i++) {  
    cout<<"NIM : "; 
    cout<<theStudent[i].NIM;   
    cout<<"Enter UTS value : "; 
    cout<<theStudent[i].UTS; 
    cout<<"Enter UTS value : "; 
    cout<<theStudent[i].UAS; 
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
