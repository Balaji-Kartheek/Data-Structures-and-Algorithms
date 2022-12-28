#include<iostream>
using namespace std;

/*
    1.from the given graph generate the sum graph
    2. count the number of even nodes in sum graph

    10              
   /  \
  -2   3
  /\   /\
 8 -4  6 5
sum grapgh:

    16
   /  \
  4    11
  /\   /\
 0  0  0 0

 Answer : 6 (16,4,0,0,0,0)
*/


struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    } 

};

void preorder(struct Node* root){

    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int countLeafNodes(struct Node* root){
    if(root==NULL){
        return 0;
    }

    if(root->left==NULL && root->right==NULL){
        return 1;
    }

        return countLeafNodes(root->left)+countLeafNodes(root->right);
}


void computation(Node* root){

    int value=0;
    int count = 0;

    while(root->left!=NULL && root->right!=NULL){
        
        value+= root->left->data + root->right->data;
        computation(root->left);
        computation(root->right);
    }

    
    cout<<"value is: "<<value<<endl;

}




int main(){

    int flag = 1;
    int data;
    cout<<"Enter the elements of the graph: "<<endl;

    struct Node* root = new Node(10);
    root->left =new Node(-2);
    root->right = new Node(3);


    root->left->left = new Node(8);
    root->left->right = new Node(-4);

    root->right->left = new Node(6);
    root->right->right  = new Node(5);

    preorder(root);

    int sum = countLeafNodes(root);
    cout<<"\nNumber of leafNodes in the tree: "<<sum<<endl;

    computation(root);
    
}