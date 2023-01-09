#include<iostream>
using namespace std;

//node creation

class node{
    public:
    int data;       //variable to store the data
    node* link;     //link part points to next node

    node* head =NULL;       //head pointer of data type node
    node(int val){
        data = val;
        link =NULL;
    }
    node(){

    }

    void insertAtTail(node* &head,int val){      //head is a node pointer and head pointer is taken by reference

    node* n = new node(val);      //dynamically creation of memory using n node pointer

    //if LL is empty
    if(head==NULL){
        head = n;           //if head is pointing to NULL then head points to the new node
    }

    node* temp =head;       //temp node pointer pointing to the head node
    //tranverse to find the tail node
    while(temp->link!=NULL){
        temp = temp->link;
    }
    //at the end of loop the temp contains the details of the last node
    temp->link = n;     //it is referring to the new node

}
    void display(node* head){
    node* temp;
    while(temp->link!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }cout<<"NULL"<<endl;

}
};



int main(){

    node* head =NULL;       //head pointer of data type node
    
    node obj;

    obj.insertAtTail(head,10);
    obj.insertAtTail(head,20);
    obj.insertAtTail(head,30);
    
    obj.display(head);
    
    

    

    


    return 0;

}