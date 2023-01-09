#include<iostream>
using namespace std;
/*
here tail pointer points to the head node
*/

//creation of a node

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

//head pointer of the node

struct node* head = NULL;





int main(){

    
    int flag,value;
    int n;
    

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