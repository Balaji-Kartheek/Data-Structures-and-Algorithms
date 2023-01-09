#include<iostream>
using namespace std;

//implentation of graph using adjacency matrix

int main(){

    int m,n;

              

    cout<<"Enter the Number of nodes of the graph: "<<endl;

    cin>>m;
    n=m;

    int amat[m][n];     //adjacence matrix

    //initially all to 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            amat[i][j] = 0;
        }

    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<amat[i][j]<<" ";
        }
        cout<<endl;

    }


    int flag;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"is there is relation btw "<<(i+1)<<" and "<<(j+1)<<" node: "<<endl;
            cin>>flag;
            if(flag==1){
                amat[i][j] = 1;
            }
            flag =0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<amat[i][j]<<" ";
        }
        cout<<endl;

    }



}