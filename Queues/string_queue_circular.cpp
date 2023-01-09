#include<iostream>
#include<string.h>
using namespace std;

//2. Implement a circular queue of Strings with functions insert, delete and display.

#define size0 3
#define size1 25

char arr[size0][size1];
int front =-1;
int back=-1;
int count=0;



bool isfull(){
	return(count==size0);	
}


bool isempty(){
	return(count==0);
}


void enqueue(char data[20]){
	if(isfull()){
		cout<<"Queue is full"<<endl;
	}else{
		back = (back+1)%size0;
		strcpy(arr[back],data);
		count++;
		if(front==-1){
			front++;
		}
	}
}


void dequeue(){
	if(isempty()){
		cout<<"Queue is empty"<<endl;
	}else{
		char pop[20];
		strcpy(pop,arr[front]);
		arr[front][0] = 0;
		front = (front+1)%size0;
		cout<<"The pop string is: "<<pop<<endl;
		count--;
	}
}


void display(){
	if(isempty()){
		cout<<"Queue is empty"<<endl;
	}else{
		for(int i=0;i<size0;i++){
		cout<<arr[i]<<"  ";
	}cout<<endl;
	}
}

void peek(){
	cout<<"The peek string is: "<<arr[front]<<endl;
}


int main(){

    int flag;
    char data[10];
    for(int i=0;i<size0;i++){
    	
    	for(int j=0;j<size1;j++){
    		arr[i][j]=' ';
		}
	}
	
	
	
	cout<<"flag -> 1 for enqueue the string into Queue\n";
	cout<<"flag -> 2 for dequeue the string into Queue\n";
	cout<<"flag -> 3 for display of string in the Queue\n";
	cout<<"flag -> 4 to get the peek string in the Queue\n";	
	cout<<"flag -> 5 to exit the program\n";
	do{
		cout<<"enter the flag value: "<<endl;		
		cin>>flag;
		
		switch(flag){
			case 1:
				cout<<"enter the string to push into the Queue: \n";
				cin>>data;
				enqueue(data);
				break;
			case 2:				
				dequeue();
				break;
			   case 3:
			  	display();
			 	break;
			case 4:
				peek();
				break;
			case 5:
				cout<<"End of the Program"<<endl;
				exit(0);				
			default:
				cout<<"Enter the valid flag value: "<<endl;
				break;							
		}		
		
	}while(flag!=5);
	

}

