#include<iostream>
using namespace std;
	struct node
	{
		int data;
		struct node* link;
		
	};
	// two pointers with  NUll values
	struct node* front=NULL;
	struct node* rear=NULL;

    bool isempty()
	{
		return(front==NULL && rear==NULL);
	}
	
	void enqueue(int value)
	{
			struct node* temp= new node();
			temp->data=value;
			temp->link=NULL;
			if(isempty())
			{
				front=rear=temp;
				return;
			}
			rear->link=temp;
			rear=temp;
			
			
		
	}
	void dequeue()
	{
		struct node* temp;
				
			if(front==NULL)
			return;
			if(front==rear)
			{
				cout<<"The pop element is: "<<front->data<<endl;
				front=rear=NULL;
				return;
			}
			else{
				cout<<"The pop element is: "<<front->data<<endl;
				front=front->link;
				
			}
			
			
		
	}
	void peek_element()
	{
		if(front!=NULL)
		cout<<"The peek value is: "<<front->data<<endl;
		else
		cout<<"Queue is empty"<<endl;
	}
	
	void display()
	{
		node* temp=front;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->link;
		}
		cout<<"NULL"<<endl;
	}
	int main()
	{
		int flag;
		cout<<"Enter 1 to enqueue into the Queue"<<endl;
		cout<<"Enter 2 to dequeue in the Queue"<<endl;
		cout<<"Enter 3 to display the elements in the Queue"<<endl;
		cout<<"Enter 4 to get the peek element "<<endl;
		cout<<"Enter 5 to check is empty or not"<<endl;
		cout<<"Enter 6 to Exit the program"<<endl;
		do
		{
			int value;
			int pos1,pos2;
			int pos;
				
		cout<<"Enter the flag value: "<<endl;
		cin>>flag;
		switch(flag)
		{
			case 1:
				int pos;
			cout<<"enter the element to enqueue into the Queue"<<endl;
				cin>>value;
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				peek_element();
				break;
			case 5:
				isempty();
				break;
			case 6:
				exit(0);
				break;
				}
		
	}while(flag!=6);
}

