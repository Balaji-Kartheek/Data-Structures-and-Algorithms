#include<iostream>
using namespace std;

#define n 6

int arr[n];
int front=-1;
int back=-1;
int count=0;


bool isempty(){
    return(count==0);
    //returns 1 if true that is no. elements is 0
}

bool isfull(){
    return(count==n);
}

void enqueue(int element){
    if(isfull()){
        cout<<"Queue Overflow"<<endl;
    }else{
        back=(back+1)%n;
        arr[back] = element;
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
        cout<<"The pop element is: "<<arr[front]<<endl;
        arr[front]=0;
        front=(front+1)%n;
        count--;
    }
}

void display(){
    if(isempty()){
        cout<<"Queue is empty"<<endl;

    }else{
        cout<<"The elements in the Queue are: "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
}

void peek(){
    if(isempty()){
        cout<<"Queue is empty"<<endl;

    }else{
        cout<<"The peek element is"<<arr[front]<<endl;
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

