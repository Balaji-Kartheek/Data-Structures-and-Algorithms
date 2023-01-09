#include<iostream> 
using namespace std; 
 

int top=-1; 
int arr[30]; 
int n=30;           // here n=10 represents the size of the array 
 

void push(int x){ 
    top++; 
    arr[top]=x; 
}  

int pop(){ 
    top--;
    return arr[top+1]; 
} 



int isempty(){ 

    if((top==-1)){ 
        return 1;
    }else{
        return 0;
    } 

} 


int main(){

    //DFS implementation

    int visitState[6] = {0,0,0,0,0,0};      //state of visiting

    int amat[6][6] = {  {0,0,1,1,1,0},{0,0,0,0,1,1},{1,0,0,1,0,1},{1,0,1,0,0,0},{1,1,0,0,0,1},{0,1,1,0,1,0} };    //adjacency matrix

    int i=0;    //start node

    cout<<"The DFS  of a given graph is: "<<endl;
    
    visitState[i] = 1;      // the starting node i is visited
    push(i);

    while(!isempty()){
        for(int j=0;j<6;j++){
            if(amat[i][j]==1 && visitState[j]!=1){
                push(j);
            }
        }
        
        
    }
}