#include<iostream>
using namespace std;

/*
    time complexity = (n-1)*(n-1-i)

*/

void SelectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){  //passes
        for(int j=n-2;j>=i;j--){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        cout<<"Array after pass: "<<i+1<<" "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
}

int main(){

    cout<<"Enter number of elements"<<endl;
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Elements Before Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Elements After Sorting: "<<endl;

    //function call

    SelectionSort(arr,n);

    return 0;
}
















/*

#include<iostream>
using namespace std;

void Sort(int arr[],int n){

}

int main(){

    cout<<"Enter number of elements"<<endl;
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Elements Before Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Elements After Sorting: "<<endl;

    //function call

    Sort(arr,n);

    return 0;
}

*/