#include<iostream>
using namespace std;

//creation of a node

struct node{

    struct node* prev;
    int data;
    struct node* next;
};

//head pointer of the node

struct node* head = NULL;

// Insert an element at the rear end of the list

void insertAtRear(int value){
    node* temp = new node();
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;

    if(head == NULL)  
       {  
           temp->next = NULL;  
           temp->prev = NULL;  
           head = temp;  
       }  

    else{
        node* traverse = head;
        while(traverse->next!=NULL){
        traverse= traverse->next;
    }
    
    traverse->next = temp;
    temp->prev = traverse;
    }
    
}

void insertAtHead(int value){    

    node* temp = new node();
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;

    if(head==NULL){
        head = temp;
        return;
    }

    head->prev = temp;
    temp->next = head;
    head = temp;
}

void display(){
    node* temp = head;
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }while(temp!=NULL);
    cout<<"NULL"<<endl;
}

void insertBefore(int value,int n){

    node* temp = new node();
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;

    node* traverse = head;
    for(int i=0;i<n-1;i++){
        traverse=traverse->next;
    }

    temp->next = traverse->next;
    traverse->next= temp;
    temp->prev = traverse; 

}

void insertAfter(int value,int n){

    node* temp = new node();
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;

    node* traverse = head;
    for(int i=0;i<n;i++){
        traverse=traverse->next;
    }

    temp->next = traverse->next;
    traverse->next= temp;
    temp->prev = traverse;

}

void deleteRear(){

    node* traverse = head;

    int count=0;
    while(traverse->next!=NULL){
        count++;
        traverse = traverse->next;
    }

    traverse->prev = NULL;
    traverse = head;
    for(int i=1;i<count;i++){

        traverse = traverse->next;
    }
    traverse->next= NULL;

}

void deletePosition(int n){

    node* temp1 =head;
    node* temp2 = head;
    node* temp3 = head;
    for(int i=0;i<n-1;i++){
        temp1 = temp1->next;
        temp2 = temp2->next;
        temp3 = temp3->next;
    } 
    temp2 = temp2->next;
    temp3 = temp3->next;
    temp3 = temp3->next;
    cout<<"The pop node contains data value: "<<temp2->data<<endl;
    temp1->next=temp2->next;
    temp3->prev=temp1;
    temp2->prev=NULL;
    temp2->next=NULL;
}

int main(){
    
    
    int flag,value;
    int n;
    
    cout<<"My name is Balaji Kartheek(200968080)"<<endl;

    do{
        cout<<"Enter the flag value: "<<endl;
        cin>>flag;
        switch(flag){
            case 1:
                cout<<"Enter the number to insert at tail: "<<endl;
                cin>>value;
                insertAtRear(value);
                break;

            case 2:
                cout<<"Enter the number to insert at head: "<<endl;
                cin>>value;
                insertAtHead(value);
                break;
            
            case 3:
                 cout<<"Enter the value and position to insert a node before a node: "<<endl;
                 cin>>value;
                cin>>n;
                insertBefore(value,n);
                break;

            case 4:
                cout<<"Enter the value and position to insert a node after a node: "<<endl;
                cin>>value;
                cin>>n;
                insertAfter(value,n);
                break;

            case 5:
                cout<<"Deleting a node at Rear side: "<<endl;
                deleteRear();
                break;

            case 6:
                cout<<"Enter the position to delete a node in LInked List: "<<endl;
                cin>>n;
                deletePosition(n);
                break;
            case 7:
                cout<<"Doubly Linked List is: "<<endl;
                display();
                break;

            case 8:
                cout<<"terminating the program: "<<endl;
                exit(0);
                break;
            default:
                cout<<"Enter a valid flag value: "<<endl;
                

        }
    }while(flag!=0);
}
