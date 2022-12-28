#include<iostream>
using namespace std;

// count paths from top left to right bottom in a matrix


// method 1
/*
    here the number of function calls are repeating 
    NUMBER OF PATHS FOR M,N AND N,M ARE SAME
*/

int numberofpaths(int m,int n){
    if(m==1 || n==1){
        return 1;   // only one path from index 1 
    }
    return numberofpaths(m-1,n) + numberofpaths(m,n-1);     //paths from the neighbours
}

//method 2

int method2(int m,int n){
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                mat[i][j] = 1;
            }
        }
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            mat[i][j] = mat[i-1][j]+mat[i][j-1];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;

    cout<<"Number of paths "<<mat[m-1][n-1]<<endl;;
    
}


int main(){

    cout<<"Enter the size of the matrix: "<<endl;
    int m,n;
    cin>>m>>n;

    cout<<"Number of paths: "<<numberofpaths(m,n)<<endl;
    method2(m,n);

}