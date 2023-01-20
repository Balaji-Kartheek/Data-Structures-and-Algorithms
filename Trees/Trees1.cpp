#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    

    node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

node* createTree(node* root){

    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    root = new node(data);

    if(data ==-1){
        return NULL;
    }

    cout<<"Enter data for left of the root: "<<root->data<<endl;
    root->left = createTree(root->left);
    cout<<"Enter data for right of the root: "<<root->data<<endl;
    root->left = createTree(root->left);

    return root;
}

int main(){

    node* root = NULL;

    root = createTree(root);

}