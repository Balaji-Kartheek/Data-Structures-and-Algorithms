#include<iostream>
using namespace std;


/*
    Divide and Conquer 

    c(n)= O(nlog(n))

*/
/*
    23 43 12 32 7 2

*/


void merge(int arr[],int l,int mid,int r,int n){
    int i=l;
    int j=mid+1;
    int k=l;

    int temp[n];
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }else{
            temp[k] = arr[j];
            k++;
            j++;
        }

    }

    while(i<=mid){
        temp[k] = arr[i];
            k++;
            i++;
    }
    while(j<=r){
        temp[k] = arr[j];
            k++;
            j++;
    }

    for (int p = l; p <= r; p++) {
        arr[p] = temp[p];
    }
}

void mergeSort(int arr[],int n,int l,int r){

    if(l<r){
        int mid = (l+r)/2;

        mergeSort(arr,n,l,mid);
        mergeSort(arr,n,mid+1,r);
        merge(arr,l,mid,r,n);
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

    mergeSort(arr,n,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    return 0;
}