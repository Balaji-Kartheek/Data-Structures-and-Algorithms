#include<iostream>
using namespace std;

//creation of the node

/*
    2*i+1 ->gives left position 
    2*i+2 ->gives the right position
    (i-1)/2 ->gives position of father
*/

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct node* root){

    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(struct node* root){

    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(struct node* root){

    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int countNodes(node* root){
    
    if(root==NULL){
        return 0;
    }

    return 1+countNodes(root->left)+countNodes(root->right);
}

int sumNodes(node* root){
    if(root == NULL){
        return 0;
    }

    return sumNodes(root->left)+sumNodes(root->right) + root->data;
}

int leafNodes(node* root){

    if(root==NULL){
        return 0;
    }else{
        if(root->left==NULL && root->right==NULL){
            
            return 1;
        }
        return leafNodes(root->right)+leafNodes(root->left);
    }
}

int DepthOfTree(node* root){
    if(root==NULL){
        return 0;
    }else{
        int lDepth = DepthOfTree(root->left);
        int rDepth = DepthOfTree(root->right);

        if(lDepth>rDepth){
            return(lDepth+1);
        }else{
            return (rDepth+1);
        }
    }
}

void getParent(node* root,int key){
    int flag=0;


}

bool getAncestors(node* root,int key){

    if(root==NULL){
        return false;
    }
    if(root->data == key){
        
        return true;
    }

    if(getAncestors(root->left,key) || getAncestors(root->right,key)){
        cout<<root->data<<" ";
        return true;
    }

    return false;
}

int main(){

    struct node* root =new node(1);
    root->left =new node(2);
    root->right = new node(3);


    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right  = new node(7);

    cout<<"preorder: ";
    preorder(root);
    cout<<endl;

    cout<<"postorder: ";
    postorder(root);
    cout<<endl;

    cout<<"inorder: ";
    inorder(root);
    cout<<endl;

    cout<<"total number of nodes: "<<countNodes(root)<<endl;
    cout<<"Sum of all nodes: "<<sumNodes(root)<<endl;
    cout<<"Leaf nodes of the given tree is: "<<leafNodes(root)<<endl;
    cout<<"maximum Depth of the tree: "<<DepthOfTree(root)<<endl;
int key;
    cout<<"Enter the node to get that node's parent in the tree: "<<endl;
    cin>>key;
    
    cout<<getAncestors<<endl;

}