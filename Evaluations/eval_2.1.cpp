/**
 * 
 * Given a graph form the adjacency matrix and find out the indegree and outdegree of the graph
 * 
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

     int indegree,outdegree=0;

     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(amat[i][j]==1){
                 outdegree++;
             }
         }
         cout<<"The Outdegree of "<<i<<" is: "<<outdegree<<endl;
         outdegree=0;
     }


     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(amat[j][i]==1){
                 indegree++;
             }
         }
         cout<<"The Indegree of "<<i<<" is: "<<indegree<<endl;
         indegree=0;
     }

     return 0;

 }