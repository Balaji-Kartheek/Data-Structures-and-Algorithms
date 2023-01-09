/**
 * from the given graph take a vertex v as input and
 * compute is the paths from vertex v to all the remaining vertices in the graph
 * 
 * from the A^2 adjacency matrix if the element is not 0 then there is a path
 * btw i and j in two steps
 */

#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the number of nodes in the graph: "<<endl;
     int n;
     cin>>n;

     int amat[n][n];

     cout<<"Enter the matrix if there is a btw two nodes connection 1 else 0"<<endl;

     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cin>>amat[i][j];
         }
     }

     cout<<"The Adjacency Matrix from the given graph is: "<<endl;

    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout<<amat[i][j]<<" ";
         }
         cout<<endl;
     }
     cout<<endl;



    
}