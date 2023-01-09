#include<iostream>
#include<stack>
using namespace std;

struct node{
    int value;
    node* link;
};

node* head = NULL;



void getNewNode(int data){

    node* temp = new node();
    temp->value = data;
    temp->link = NULL;

    node* traverse = head;
    if(head==NULL){
        temp->link=head;
        head=temp;
        return;
    }

    while(traverse->link!=NULL){
        traverse = traverse->link;
    }
    traverse->link = temp;
}


void getNewNodeAtIndex(int index,int data){
    node* temp = new node();
    temp->value = data;
    temp->link = NULL;

    node* traverse = head;
    
    for(int i=0;i<index-1;i++){
        traverse = traverse->link;
        
    }
    
    temp->link = traverse->link;
    traverse->link = temp;

}

void DeleteNode(int index){

    node* traverse = head;
    node* traverse2 = head;

    if(index==0){
        head = traverse->link;
        return;
    }

    for(int i=0;i<index-1;i++){
        traverse = traverse->link;
        traverse2 = traverse2->link;
    }
    traverse2 = traverse2->link;
    traverse->link = traverse2->link;
    traverse2->link = NULL;
}


void print(){

    node* traverse = head;
    while(traverse!=NULL){
        cout<<traverse->value<<" ";
        traverse = traverse->link;
    }
    cout<<"NULL"<<endl;

}

void printReverse(){
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
		cout<<traverse->value<<"->";
		traverse = traverse->link;

	}while(traverse!= NULL);
	cout<<"NULL"<<endl;
}


int main(){

    int test_cases;
    cout<<"Enter Number of Test cases: "<<endl;
    cin>>test_cases;

    int n;
    cout<<"Enter number of elements to insert"<<endl;
    cin>>n;

    int value;
    cout<<"Enter the values :"<<endl;

    for(int i=0;i<n;i++){
        cin>>value;
        getNewNode(value);
    }

    printReverse();
    
    
    

    //cout<<"Enter the index to delete: "<<endl;
    //int index;
    //cin>>index;

    //DeleteNode(index);
    //getNewNodeAtIndex(index,value);

    print();

    return 0;

}