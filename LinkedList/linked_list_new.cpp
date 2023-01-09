#include<iostream>
using namespace std;
	struct Node
	{
		int data;
		struct Node* next;
		
	};
	struct Node* head=NULL;
	
	
	
	void insert(int data)
	{
		Node* temp1 = new Node();
		temp1->data=data;
		temp1->next=NULL;
		
		
			temp1->next=head;
			head=temp1;
			return;	
		
	}
	void insert_end(int data1)
	{
		Node* temp1 = new Node();
		temp1->data=data1;
		temp1->next=NULL;
		Node* temp2 = head;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
//		temp1->next=temp2->next;
		temp2->next=temp1;
		
		
	}
	void print()
	{
		Node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

void before_ele(int data,int n)
{
		Node* temp1 = new Node();
		temp1->data=data;
		temp1->next=NULL;
		Node* temp2 = head;
		for(int i=0;i<n-1;i++)
		{
			temp2=temp2->next;
		}
		temp1->next=temp2->next;
		temp2->next=temp1;
		
	
}
void after_ele(int data,int n)
{
		Node* temp1 = new Node();
		temp1->data=data;
		temp1->next=NULL;
		Node* temp2 = head;
		for(int i=0;i<n;i++)
		{
			if(temp2->next!=NULL)
			{
				temp2=temp2->next;	
			}
			
		}
		temp1->next=temp2->next;
		temp2->next=temp1;
		
	
}
void delete_node(int n)
{
	struct Node* temp2=head;
	for(int i=0;i<n-1;i++)
	{
		temp2=temp2->next;
	}
	Node* temp1=temp2->next;
	temp2->next=temp1->next;
//	free(temp1);
	
}

	
int main(){
	
	int option;
	cout<<"My name is Balaji Kartheek(200968080)"<<endl;

		cout<<"Enter 1 to Insert the Node At Beginning"<<endl;
		cout<<"Enter 2 to Insert the Node At the end"<<endl;
		cout<<"Enter 3 to Insert before other element"<<endl;
		cout<<"Enter 4 to Insert after other element"<<endl;
		cout<<"Enter 5 to delete the element"<<endl;
		cout<<"Enter 6 to print the elements"<<endl;
		cout<<"Enter 7 to exit the program"<<endl;
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
				insert(num);
				break;
			case 2:
				cout<<"Enter Number to Insert the Node At the end"<<endl;
				cin>>num;
				insert_end(num);
				break;
			case 3:
				cout<<"Enter Number to Insert "<<endl;
				cin>>d1;
				cout<<"Enter position of before element" <<endl;
				
				cin>>pos;
				before_ele(d1,pos);
				
				
				break;
			case 4:
				cout<<"Enter Number to Insert "<<endl;
				cin>>d1;
				cout<<"Enter position of after element" <<endl;
				
				cin>>pos;
				after_ele(d1,pos);
				
				
				break;
			case 5:
				cout<<"Enter position to delete" <<endl;
				cin>>pos;
				delete_node(pos);
				break;
			
			case 6:
				
				print();
				break;
			case 7:
				
				exit(0);
				break;
				
			default :
				cout<<"Invalid Input"<<endl;
				
				
				
		}
			
		}while(option!=7);



        return 0;	
		
		
	}