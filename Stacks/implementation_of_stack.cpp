//. 1. Implementation of Stack using arrays

#include<iostream>
using namespace std;

int top=-1;
int arr[10];
int n=10;			// here n=10 represents the size of the array

void push(int x){
	top++;
	arr[top]=x;
}

void display(){
	for(int i=0;i<=top;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void pop(){
	cout<<"the pop element is: "<<arr[top]<<endl;
	top--;
}

void peek(){
	cout<<"The peek value in the stack is: "<<arr[top]<<endl;
}

void isempty(){
	if((top==-1)){
		cout<<"stack is empty"<<endl;
	}else{
		cout<<"stack is not empty"<<endl;
	}
}

void isfull(){
	if((top==n-1)){
		cout<<"stack is full"<<endl;
	}else{
		cout<<"stack is not full"<<endl;
	}
}

int main(){
	
	int flag,push_ele;
	
	
	cout<<"flag -> 1 for push the element into stack\n";
	cout<<"flag -> 2 for pop the element into stack\n";
	cout<<"flag -> 3 for display of elements in the stack\n";
	cout<<"flag -> 4 to get the peek element in the stack\n";
	cout<<"flag -> 5 to check stack is empty or not: \n";
	cout<<"flag -> 6 to check the stack is full or not stack\n";
	cout<<"flag -> 7 to exit the program\n";
	do{
		cout<<"enter the flag value: "<<endl;		
		cin>>flag;
		
		switch(flag){
			case 1:
				cout<<"enter the element to push into the stack: \n";
				cin>>push_ele;
				push(push_ele);
				break;
			case 2:				
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				isempty();
				break;
			case 6:
				isfull();
				break;
			case 7:
				cout<<"End of the Program"<<endl;
				exit(0);
			default:
				cout<<"Enter the valid flag value: "<<endl;
				break;							
		}		
		
	}while(flag!=7);
	
	
	
	return 0;
}
