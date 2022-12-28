#include<iostream>
using namespace std;

void billamount(int X){

    int value = X;
    int j= 1;
    int i=0;
    int n=0;
    int count = 1;
    int rem[10];

    while(value!=0){
        rem[i] = value%10;
        value = value/10;
        i++;
        n++;
    }

    

    for(int i=0;i<n-1;i++){
        if(rem[0]!=rem[i+1]){
            count++;
        }
    }

    cout<<count;
}

int main(){

    int X;
    cout<<"Enter the amount: "<<endl;
    cin>>X;

    billamount(X);
}