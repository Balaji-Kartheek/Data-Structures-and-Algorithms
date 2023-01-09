#include<iostream>
using namespace std;

/*
1. Write a C++ program with a class PATIENT for a group of 12 
diabetic patients holding data for their Patient ID, Name, Age, 
Fasting Glucose, Random Glucose.
*/

class A{
    public:
    int patient_id;

    void getData();
    void printData();
    
};

void A::getData(){
    cout<<"Enter the patient-id: "<<endl;
    cin>>patient_id;
}

void A::printData(){
    cout<<"patient-id : "<<endl;
    cout<<patient_id<<endl;
}


int main(){
    A obj[12];
    

    for(int i=0;i<2;i++){
        obj[i].getData();
    }

    for(int i=0;i<2;i++){
        obj[i].printData();
        
    }

    


}