#include<iostream>
using namespace std;


int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){


    cout<<"Enter the a and b values: "<<endl;
    int a,b;
    cin>>a;
    cin>>b;

    cout<<"GCD is: "<<gcd(a,b);


    return 0;
}