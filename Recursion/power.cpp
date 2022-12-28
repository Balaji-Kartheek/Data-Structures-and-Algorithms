// there should a base condition

#include<iostream>
using namespace std;


int power(int n,int p){
    if(p==0){
        return 1;
    }

    return n*power(n,p-1);
}

int main(){

    cout<<"Enter the number: "<<endl;
    int n;
    cin>>n;

    cout<<"Enter the power: "<<endl;
    int p;
    cin>>p;

    cout<<"power of number: "<<n<<"raise to "<<p<<" is: "<<power(n,p)<<endl;


    return 0;
}