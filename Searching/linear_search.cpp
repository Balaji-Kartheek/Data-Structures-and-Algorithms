#include<iostream>
using namespace std;

// space complexity
// time complexity O(n)



int linear_seach(int key,int arr[],int n){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }

    return 0;
}

int main(){

    cout<<"Enter the size of the array: "<<endl;
    int size;
    cin>>size;

    int arr[size];

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


    cout<<"Enter the key to search: "<<endl;
    int key;
    cin>>key;

    if(linear_seach(key,arr,size)==1){
        cout<<"key "<<key<<" is found "<<endl;
    }
    else{
        cout<<"key "<<key<<" is not found "<<endl;
    }


    return 0;
}