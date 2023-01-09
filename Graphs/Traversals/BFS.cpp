#include<iostream>
using namespace std;
// new code



#define n 20
/*
Declaring the Global Variables
*/

int arr[n];
int front = -1;
int back = -1;

/*
			a b c d e f 
*/

void peek(){
	if(front>back|| front ==-1){
		cout<<"Queue is empty"<<endl;
	}else{
		cout<<"The peek element of the Queue is: "<<arr[front]<<endl;
	}
    
}
void enqueue(int push_ele){
    back++;
        arr[back]=push_ele;
		if(front==-1){
			front++;
		}
}


void display(){
	if(front==-1||front>back){
		cout<<"Queue is empty"<<endl;
	}
    for(int i= front;i<=back;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int dequeue(){
    if(front>back|| front ==-1){
		return -1;
	}else{
	    front++;
		
    	
	}
	return arr[front-1];
}

int isempty(){
    if(front>back||front==-1){
        return 1;
    }else{
        return 0;
    }
}

void isfull(){
    if(back == n-1){
        cout<<"Queue is full"<<endl;
    }else{
        cout<<"Queue is not full"<<endl;
    }
}

int main(){

    //BFS implementation

    int visitState[6] = {0,0,0,0,0,0};      //state of visiting

    int amat[6][6] = {  {0,0,1,1,1,0},{0,0,0,0,1,1},{1,0,0,1,0,1},{1,0,1,0,0,0},{1,1,0,0,0,1},{0,1,1,0,1,0} };     //adjacency matrix

    int i=0;    //start node

    cout<<"The BFS  of a given graph is: "<<endl;
    cout<<i;
    visitState[i] = 1;      // the starting node i is visited
    enqueue(i);             // enqueued the starting node


    while(!isempty()){
    
        
        int node = dequeue();

        for(int j=0;j<6;j++){
            if(amat[node][j] == 1 && visitState[j]==0){         //node is unvisited and there is a link between node and j
                cout<<" "<<j;
                visitState[j]=1;        //making j node as visited
                enqueue(j);

            }
        }

    }


}