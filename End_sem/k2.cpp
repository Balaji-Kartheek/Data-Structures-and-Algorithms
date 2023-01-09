#include<iostream>
using namespace std;

#define n 4
/*
1. Write a C++ program to create a queue of size n. The 
value in the middle (MID) position of the queue should be 
zero, value in the MID+1 position should be 1 and the 
value in MID-1 position should be fixed to -1.
a. Insert the values and display the contents of the 
queue by ignoring and considering those fixed 
values.
b. Create a binary tree with root value being the MID 
position value of the above queue. Then the left 
child of the root should be the value at MID-2 
position of the queue. Similarly, the right child of the 
root should be the value at last position of the 
queue. Display the created tree.
c. Accept more values from the user and make the 
above created tree to be the complete binary tree. 
d. Display the leaf node values and find the sum of 
internal node values.
*/

int arr[n];
int front = -1;
int back = -1;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

void enqueue(int push_ele){
    if(back==n-1){
        cout<<"Queue Overflow"<<endl;
    }else{

        back++;
        arr[back]=push_ele;
		if(front==-1){
			front++;
		}
    }
}



void display(){
	if(front==-1||front>back){
		cout<<"Queue is empty"<<endl;
	}
    for(int i= 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void leafNodes(Node* root){

    if(root==NULL){
        return;
    }else{
        if(root->left==NULL && root->right==NULL){
            cout<<root->data<<" ";
            
        }
        
    }
}

int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }

    return sumNodes(root->left)+sumNodes(root->right) + root->data;
}




int main(){

    int push_ele;

    for(int i=0;i<n;i++){
        cout<<"enter the element to push into the Queue: \n";
	    cin>>push_ele;
		enqueue(push_ele);
	}
    int mid=n/2;

    arr[mid]=0;
    arr[mid-1]=-1;
    arr[mid+1]=1;

    display();

    Node* root = new Node(arr[mid]);
    root->left = new Node(arr[mid-2]);
    root->right = new Node(arr[-1]);

    cout<<"The inorder traversal of the binary tree: "<<endl;
    inorder(root);

    cout<<"The leafNodes of the Tree: "<<endl;
    leafNodes(root);
    cout<<endl;
    cout<<"Sum of all Nodes : "<<(sumNodes(root)-(root->data))<<endl;
    

}