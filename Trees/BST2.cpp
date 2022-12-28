#include<iostream>
using namespace std;


/*
    search in a BST is O(log(n))
    for each level passing no. of nodes to check is decreased by a factor 2
    height =log(no.(nodes)+1)
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


node* searchBST(node* root,int key){
    //base case
    if(root==NULL){
        return NULL;
    }

    if(root->data==key){
        return root;
    }

    if(key<root->data){
        return searchBST(root->left,key);
    }

    return searchBST(root->right,key);
}

node* smallestNode(node* root){
    if(root->left==NULL && root->right==NULL){
        return root;        
    }

    return smallestNode(root->left);
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

    int flag=1,value;
    
    cout<<"My name is Balaji Kartheek(200968080)"<<endl;

    cout<<"flag->1 for insertion"<<endl;
    cout<<"flag equal to any another value for exit of insertion:  "<<endl;

    do{
        cout<<"Enter the flag value: "<<endl;
        cin>>flag;
        if(flag!=1){
            break;
        }
        cout<<"Enter the node data to insert into the tree: "<<endl;
        cin>>value;
        insertBST(root,value);

    }while(flag==1);
    

    inorder(root);
    cout<<endl;

    int key;
    cout<<"Enter the key to search: "<<endl;
    cin>>key;

    if(searchBST(root,key)==NULL){
        cout<<"key "<<key<<" is not found"<<endl;
    }else{
        cout<<"key "<<key<<" is found"<<endl;
    }

    

    cout<<"The smallest element is: "<<smallestNode(root)->data<<endl;

    return 0;
}
