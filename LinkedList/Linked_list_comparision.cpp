/**You’re given the pointer to the head nodes of two linked lists. 
 * Compare the data in the nodes of the linked lists to check if they are equal.
 *  If all data attributes are equal and the lists are the same length, return 1 . Otherwise,
 *  return 0.
 * */

#include<iostream>
using namespace std;

struct node{
    int data;
    node* link = NULL;
};

node* head = NULL;
node* head2 = NULL;


void insertAtfirst(int value){
    //creating the new inserting node
    node* temp1 = new node();
    temp1->data = value;
    temp1->link =NULL;

    temp1->link=head;
    head = temp1;
}

void insertAtfirst2(int value){
    //creating the new inserting node
    node* temp1 = new node();
    temp1->data = value;
    temp1->link =NULL;

    temp1->link=head2;
    head2 = temp1;
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

void insertAtTail2(int value){
    //creating the new inserting node
    node* temp1 = new node();
    temp1->data = value;
    temp1->link =NULL;

    //searching for the last node
    node* temp2 = head2;
    while(temp2->link!=NULL){
        temp2 = temp2->link;

    }

    temp2->link =temp1;
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

void display2(){
    node* temp = head2;
    do{
        cout<<temp->data<<"->";
        temp = temp->link;
    }while(temp!=NULL);
    cout<<"NULL"<<endl;
}



void comparision(){
    node* traverse1 = head;
    node* traverse2 = head2;
    int n1=0,n2=0;

    while(traverse1!=NULL){
        n1++;
        traverse1 =traverse1->link;
    }
    while(traverse2!=NULL){
        n2++;
        traverse2 =traverse2->link;
    }
    if(n1!=n2){
        cout<<"The sizes of two linked lists are different :("<<endl;
        
    }else{
        cout<<"The sizes of two linked lists are same :)"<<endl;
        cout<<"so the difference btw values: "<<endl;
       node* traverse1 = head;
       node* traverse2 = head2; 

       while(traverse1!=NULL){
           cout<<(traverse1->data-traverse2->data)<<" ";
           traverse1 = traverse1->link;
           traverse2 = traverse2->link;
       }
       cout<<endl;
    }

    
}



void mergeLists(){

}

void sortList(node* head){
    
    node* ptr1;
    node* ptr2;
    
    int temp;

    for(ptr1= head;ptr1!=NULL;ptr1=ptr1->link){
        for(ptr2 =ptr1->link;ptr2!=NULL;ptr2=ptr2->link){

            if(ptr1->data>ptr2->data){
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
        }
    }

}

int main()
	{
		int option;
		cout<<"Enter 1 to Insert the Node At Beginning"<<endl;
		cout<<"Enter 2 to Insert the Node At the end"<<endl;
		cout<<"Enter 3 to Insert the Node At Beginning of 2nd list"<<endl;
		cout<<"Enter 4 to Insert the Node At the end of 2nd list"<<endl;
        cout<<"Enter 5 to print the elements"<<endl;
		cout<<"Enter 6 to print the elements of 2nd list"<<endl;
		cout<<"Enter 7 to compare the two given lists"<<endl;
        cout<<"Enter 8 to sort the lists"<<endl;
		cout<<"Enter 9 to merge the two lists"<<endl;
        cout<<"Enter 9 to exit the program"<<endl;
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
				cout<<"Enter Number to Insert the Node At Beginning of 2nd list"<<endl;
				cin>>num;
				insertAtfirst2(num);

				break;
			case 4:
				cout<<"Enter Number to Insert the Node At the endof 2nd list"<<endl;
				cin>>num;
				insertAtTail2(num);
				break;


			case 5:
				
				display();
				break;
			
			case 6:
				
				display2();
				break;
			case 7:
				comparision();
				break;
            case 8:
                sortList(head);
                sortList(head2);
                break;
			case 9:
				
				mergeLists();
				break;
            case 10:
				
				exit(0);
				break;
				
			default :
				cout<<"Invalid Input"<<endl;
				
				
				
		}
			
		}while(option!=10);



        return 0;	
		
		
	}