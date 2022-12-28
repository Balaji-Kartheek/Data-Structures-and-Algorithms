#include<iostream>
using namespace std;

int main(){

    int n,s;
    cout<<"Enter n and s value: "<<endl;

    cin>>n>>s;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i,j,sum = 0;
    int st,en = -1;



    // sum from the starting index to the exceeding index
    while(j<n && (sum+arr[j])<=s){
        sum += arr[j];
        j++;
    }

    if(sum == s){
        cout<<"subarray sum of "<<s<<" can be formed from index: "<<i<<" to "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum+=arr[j];

        //for a particular sum
        while(sum>s){
            sum-=arr[i];
            i++;
        }

        if(sum == s){
            st = i;
            en = j;
            break;
        }
        j++;
    }
    cout<<"subarray sum of "<<s<<" can be formed from index2: "<<st<<" to "<<en<<endl;

    return 0;
}