#include<iostream>
using namespace std;

// space complexity
// time complexity < O(n)



int binary_seach(int key,int arr[],int n){

    int first = 0;
    int last =n;

    while(first<=last){
        int mid =(first+last)/2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            last = mid-1;
        }else{
            first = mid+1;
        }
    }

    return -1;
}



void selection_sort(int n,int arr[ ]){

    int i, j, min_val,temp;
 
    
    for (i = 0; i < n-1; i++)
    {
        
        min_val = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_val])
            min_val = j;
 
        // Swap the found minimum element with the first element
        temp = arr[min_val];
        arr[min_val] = arr[i];
        arr[i] = temp;
       
    }
}

void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
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

    display(size,arr);
    selection_sort(size,arr);
    display(size,arr);

    if(binary_seach(key,arr,size)==-1){
        cout<<"key "<<key<<" is not found "<<endl;
    }
    else{
        cout<<"key "<<key<<" is found at position: "<<binary_seach(key,arr,size)<<endl;
    }


    return 0;
}