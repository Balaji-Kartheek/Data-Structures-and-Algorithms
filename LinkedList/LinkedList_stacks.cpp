#include<iostream>
using namespace std;
	struct node
	{
		int data;
		struct node* link;
		
	};
	struct node* top=NULL;

    bool isempty()
	{
		return (top==NULL);
	}

	void push(int value)
	{
		struct node* temp= new node();
		temp->data=value;
		temp->link=top;
		top=temp;
		
		
	}
	void pop()
	{
		 node* temp = new node();
		 if(isempty()){
             cout<<"Stack is Empty"<<endl;
         }else{
             
		 temp=top;
		 cout<<"The pop element is: "<<top->data<<endl;
         
		 top=temp->link;
         }
		 
//		 free(temp);
	}
	void peek()
	{
		if(!isempty())
		cout<<top->data<<endl;
		else
		cout<<"Stack is empty"<<endl;
	}
	
	
	
	void display()
	{
		node* temp=top;
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
		cout<<"enter 1 to push"<<endl;
		cout<<"enter 2 to pop"<<endl;
		cout<<"enter 3 to display the elements"<<endl;
		cout<<"enter 4 to see the top element "<<endl;
		cout<<"enter 5 to check stack is empty or not"<<endl;
		cout<<"enter 6 to Exit"<<endl;
		do
		{
			int num;
			int d1,d2;
			int pos;
				
		cout<<"Enter the flag value: "<<endl;
		cin>>flag;
		switch(flag)
		{
			case 1:
				int pos;
				cout<<"Enter Number to push the element"<<endl;
				cin>>num;
				push(num);
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
				exit(0);
				break;
		}
		
	}while(flag!=6);
}
