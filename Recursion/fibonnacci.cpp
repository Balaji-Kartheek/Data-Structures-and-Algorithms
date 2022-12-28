#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

int main(){

    cout<<"Enter the lower and upper bound by index: "<<endl;
    int l,b;
    cin>>l>>b;


    cout<<"fibbonocci series from lower bound "<<l<<" to upper bound "<<b<<" by index is: "<<endl;
    for(int i=l;i<b;i++){
        cout<<fib(i)<<" ";
    }cout<<endl;

    return 0;
}