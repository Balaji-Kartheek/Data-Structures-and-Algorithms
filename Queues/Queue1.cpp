#include<iostream>
using namespace std;

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
    if(back==n-1){
        cout<<"Queue Overflow"<<endl;
    }else{

        back++;
        arr[back]=push_ele;
		if(front==-1){
			front++;
		}
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


void dequeue(){
    if(front>back|| front ==-1){
		cout<<"Queue Underflow"<<endl;
	}else{
		cout<<"The Pop element is: "<<arr[front]<<endl;
    	front++;
	}
}

void isempty(){
    if(front>back||front==-1){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
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

    int flag,push_ele;
	cout<<"My name is Balaji kartheek (200968080)\n";
	
	cout<<"flag -> 1 for enqueue the element into Queue\n";
	cout<<"flag -> 2 for dequeue the element into Queue\n";
	cout<<"flag -> 3 for display of elements in the Queue\n";
	cout<<"flag -> 4 to get the peek element in the Queue\n";
	cout<<"flag -> 5 to check Queue is empty or not: \n";
	cout<<"flag -> 6 to check the Queue is full or not \n";
	cout<<"flag -> 7 to exit the program\n";
	do{
		cout<<"enter the flag value: "<<endl;		
		cin>>flag;
		
		switch(flag){
			case 1:
				cout<<"enter the element to push into the Queue: \n";
				cin>>push_ele;
				enqueue(push_ele);
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
	

}