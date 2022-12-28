
// there should a base condition

#include<iostream>
using namespace std;


int factorial(int n){
    if(n==1){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){

    cout<<"Enter the number: "<<endl;
    int n;
    cin>>n;

    cout<<"Factorial of number: "<<n<<"is: "<<factorial(n)<<endl;


    return 0;
}

