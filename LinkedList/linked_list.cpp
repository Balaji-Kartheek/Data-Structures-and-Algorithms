#include<iostream>
#include<string.h>
using namespace std;

//creating a noded structor
struct node{
    int data;
    struct node* link;
};

//head ponter of struct data type
struct node* head =NULL;


void insertAtfirst(int value){
    //creating the new inserting node
    node* temp1 = new node();
    temp1->data = value;
    temp1->link =NULL;

    temp1->link=head;
    head = temp1;
}


void insertAtTail(int value){
    //creating the new inserting node
    node* temp1 = new node();
    temp1->data = value;
    temp1->link =NULL;

    //searching for the last node
    node* temp2 = head;
    while(temp2->link!=NULL){
        temp2 = temp2->link;

    }

    temp2->link =temp1;
}


void insertbeforeElement(int value,int p){
    //creating the new inserting node
    node* temp1 = new node();
    temp1->data = value;
    temp1->link =NULL;
    //searching for the particular  node
    node* temp2 = head;
    for(int i=0;i<p-1;i++){
        temp2=temp2->link;
    }

    temp1->link = temp2->link;
    temp2->link = temp1;
}

void insertafterElement(int value,int p){
    //creating the new inserting node
    node* temp1 = new node();
    temp1->data = value;
    temp1->link =NULL;
    //searching for the particular  node
    node* temp2 = head;
    for(int i=0;i<p;i++){
        temp2=temp2->link;
    }

    temp1->link=temp2->link;
    temp2->link=temp1;
}

//deletion of node in the linked list
void deletenode(int n){
    node* temp1 =head;
    node* temp2 = head;
    for(int i=0;i<n-1;i++){
        temp1 = temp1->link;
        temp2 = temp2->link;
    } 
    temp2 = temp2->link;
    cout<<"The pop node contains data value: "<<temp2->data<<endl;
    temp1->link=temp2->link;
    temp2->link=NULL;
}

//display of the elements
void display(){
    node* temp = head;
    do{
         cout<<temp->data<<"->";
        temp = temp->link;
    }while(temp!=NULL);
    cout<<"NULL"<<endl;
}

//to reverse the entire list
void reverseList(){
	node* current = head;
	node* prev = NULL;
	node* link = NULL;

	while(current!=NULL){
		link = current->link;
		current->link = prev;
		prev = current;
		current = link;
	}
	

	node* traverse = prev;
	
	do{
		cout<<traverse->data<<"->";
		traverse = traverse->link;

	}while(traverse!= NULL);
	cout<<"NULL"<<endl;

}



	int main()
	{
		int option;
		cout<<"Enter 1 to Insert the Node At Beginning"<<endl;
		cout<<"Enter 2 to Insert the Node At the end"<<endl;
		cout<<"Enter 3 to Insert before other element"<<endl;
		cout<<"Enter 4 to Insert after other element"<<endl;
		cout<<"Enter 5 to delete the element"<<endl;
		cout<<"Enter 6 to print the elements"<<endl;
		cout<<"Enter 7 to reverse the list"<<endl;
		cout<<"Enter 8 to exit the program"<<endl;
		do
		{
			int num;
			int d1,d2;
			int pos;
			
			
		cout<<"Enter option"<<endl;
		cin>>option;
		
		switch(option)
		{
			case 1:
				int pos;
				cout<<"Enter Number to Insert the Node At Beginning"<<endl;
				cin>>num;
//				cout<<"Enter position to Insert"<<endl;
//				cin>>pos;
				insertAtfirst(num);
				break;
			case 2:
				cout<<"Enter Number to Insert the Node At the end"<<endl;
				cin>>num;
				insertAtTail(num);
				break;
			case 3:
				cout<<"Enter Number to Insert "<<endl;
				cin>>d1;
				cout<<"Enter position of before element" <<endl;
				
				cin>>pos;
				insertbeforeElement(d1,pos);
				
				
				break;
			case 4:
				cout<<"Enter Number to Insert "<<endl;
				cin>>d1;
				cout<<"Enter position of after element" <<endl;
				
				cin>>pos;
				insertafterElement(d1,pos);
				
				
				break;
			case 5:
				cout<<"Enter position to delete" <<endl;
				cin>>pos;
				deletenode(pos);
				break;
			
			case 6:
				
				display();
				break;
			case 7:
				reverseList();
				break;
			case 8:
				
				exit(0);
				break;
				
			default :
				cout<<"Invalid Input"<<endl;
				
				
				
		}
			
		}while(option!=8);



        return 0;	
		
		
	}