#include <iostream>
using namespace std;

struct Student { 
    string NIM; 
    float UTS;
    float UAS; 
};

const int n = 3;

int main() {  

Student theStudent[n];

theStudent[0].NIM = "542313";
theStudent[0].UTS = 90;
theStudent[0].UAS = 95;

theStudent[1].NIM = "672912";
theStudent[1].UTS = 80;
theStudent[1].UAS = 85;

theStudent[2].NIM = "879123";
theStudent[2].UTS = 65;
theStudent[2].UAS = 75;

float checker[n] = {92.5,82.5,70};


cout<<"Enter the number of students : "<<n<<endl;
cout<<"INPUT Data mahasiswa"<<endl<<"===================================="<<endl;

for (int i=0;i<n;i++) {  

    cout<<i+1<<"."<<endl;
    cout<<"NIM : "; 
    cout<<theStudent[i].NIM<<endl;
    cout<<"Enter UTS value : "; 
    cout<<theStudent[i].UTS<<endl;
    cout<<"Enter UTS value : "; 
    cout<<theStudent[i].UAS<<endl;
}
float avg[n];
for (int i = 0;i < n;i++){
    avg[i]= (theStudent[i].UTS + theStudent[i].UAS)/2;
}
cout<<endl<<"OUTPUT Data Mahasiswa "<<endl<<"===================================="<<endl;

bool allpassed = true;

for (int i = 0; i < n ;i++){
    cout<<i + 1<<"."<<endl;
    cout<<"NIM = "<<theStudent[i].NIM<<endl;
    cout<<"Average score = "<<avg[i]<<endl;

       if (avg[i] == checker[i]){
        cout<<"TEST PASSED"<<endl;}
    else{
        cout<<"TEST FAILED"<<endl;
        allpassed = false;
        }

cout<<endl;
}
if (allpassed = true){
    cout<<"************All TEST PASSED**************"<<endl;}
else  {
    cout<<"************NOT ALL TEST PASSED************"<<endl;}
}
