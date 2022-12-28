#include<iostream>
using namespace std;



int piggyBank(int arr[],int n){

    int amount = 0;
    int count = 0;
    int terminate = 0;

    cout<<"------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        
        terminate = n-count;
        count++;
        cout<<"count: "<<count<<endl;
        cout<<"terminate: "<<terminate<<endl;

        int j= i+1;
        if(terminate!=2 && terminate!=1){
            cout<<"condition1"<<endl;
            amount = amount + arr[j-i-1]*arr[j]*arr[j+1];
            cout<<"amount: "<<amount<<endl;
        }

        if(terminate==2){
            cout<<"condition2"<<endl;
            amount = amount + arr[0]*arr[n-1];
            cout<<"amount: "<<amount<<endl;
        }
        if(terminate==1){
            cout<<"condition3"<<endl;
            amount = amount + arr[n-1];
            cout<<"amount: "<<amount<<endl;
        }
        
        
        
        
    }
    
    return amount;

    
}

int main(){
    int n;

    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    cout<<"Amount is: "<<piggyBank(arr,n)<<endl;
}