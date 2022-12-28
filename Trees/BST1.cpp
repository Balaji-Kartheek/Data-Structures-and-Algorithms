#include<iostream>
using namespace std;

/*
    BINARY SEARCH TREE
    rule1: left subtree contains only key's lesser than the node key
    rule2: right subtree contains only key's greater than the node key
    rule3: left and right subtree of a node must also form BST there should be no duplicate values

    THE INORDER TRAVERSAL OF A BST WILL BE ALWAYS IN ASCENDING ORDER
*/

 struct node{
     int data;
     struct node* right;
     struct node* left;
     node(int value){
         data = value;
         left =NULL;
         right = NULL;
     }
 };

 node* insertBST(node* root, int key){

     if(root==NULL){
         return new node(key);
     }

     if(key<root->data){
         root->left = insertBST(root->left,key);
     }else{
         root->right = insertBST(root->right,key);
     }

     return root;
 }

void inorder(struct node* root){

    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


 int main(){

     node* root = NULL;
     root = insertBST(root,5);
     insertBST(root,1);
     insertBST(root,3);
     insertBST(root,4);
     insertBST(root,2);
     insertBST(root,7);
     
    inorder(root);
    cout<<endl;
     return 0;
 }