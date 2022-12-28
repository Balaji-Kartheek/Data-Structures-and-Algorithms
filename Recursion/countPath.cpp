#include<iostream>
using namespace std;

//calculate the number of paths from house1 to all the other houses in the street

int countPath(int s,int e){
    if(s==e){
        return 1;       //self loop
    }
    if(s>e){
        return 0;
    }
    int count =0;
    for(int i=1;i<=e;i++){
        count+=countPath(s+i,e);
    }

    return count;
}

int main(){

    cout<<"Enter the number of houses: "<<endl;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"paths from house 1 to house "<<i+1<<" "<<countPath(0,i)<<endl;
    }

}