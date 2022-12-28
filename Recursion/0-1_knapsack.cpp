#include<iostream>
using namespace std;


int knapsack(int weights[], int values[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }

    if(weights[n-1]>W){
        return knapsack(weights,values,n-1,W);
    }

    return max(knapsack(weights,values,n-1,W),(knapsack(weights,values,n-1,W-weights[n-1])+values[n-1]));
}

int main(){
    cout<<"Enter the number of items: "<<endl;
    int n;
    cin>>n;

    int weights[n];
    int values[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the item weight and its values of : "<<i+1<<endl;
        cin>>weights[i]>>values[i];
    }

    cout<<"Enter the Capacity of Knapsack: "<<endl;
    int W;
    cin>>W;

    cout<<"Maximum value in knapsack: "<<knapsack(weights,values,n,W)<<endl;

}