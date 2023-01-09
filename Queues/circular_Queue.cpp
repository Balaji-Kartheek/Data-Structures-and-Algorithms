#include<iostream>
using namespace std;

// implementation of circular queues using arrays

#define n 5

int arr[n];
int front=-1;
int back =-1;

bool isempty(){
    if((front=-1) & (back = -1)){
        return true;
    }else{
        return false;
    }
}

bool isfull(){
    if((back+1%n)==front){
        return true;
    }else{
        return false;
    }
}



void enqueue(int ele){
    if(isfull()){
        cout<<"Queue Overflow"<<endl;

    }else{
        if(front==-1){
            front=0;
        }
        back = (back+1)%n;
        arr[back]=ele;
    }
}

void dequeue(){
    if(isempty()){
        cout<<"Queue is empty"<<endl;
    }
    int pop = arr[front];
    if(front==back){
            front=-1;
            back=-1;
        }else{
            front=(front+1)%n;
        }

    cout<<"The pop element is: "<<pop<<endl;
}



void peek(){
    if(isempty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"The Peek element is: "<<arr[front]<<endl;
    }
}

void display(){

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