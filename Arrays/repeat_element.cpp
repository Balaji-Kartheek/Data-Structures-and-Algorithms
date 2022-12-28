#include<iostream>
using namespace std;

asddg

# define max 1000


int main(){




    int n;
    cout<<"Enter Number of integers: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minidx = max;

    int N = 100;
    int idx[N];

    for(int i=0;i<N;i++){
        idx[i] = -1;
    }

    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx,idx[arr[i]]);
        }else{
            idx[arr[i]] = i;
        }
    }

    if(minidx==max){
        cout<<"No repeating Elements"<<endl;
    }else{
        cout<<"First Repeating Element Found : "<<arr[minidx]<<" at index: "<<minidx<<endl;
    }
}