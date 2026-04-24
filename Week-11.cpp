//Week - 11
//Implement Binary Tree and Traversal 
#include<iostream>
using namespace std;

//Node Structure
struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

struct Node* root=NULL;
Node* insert(){
    int x;
    cout<<"Enter the Node data"<<endl;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* newnode = new Node(x);
    cout<<"Enter the left child of : "<< x <<endl;
    newnode->left = insert();
    cout<<"Enter the right child of: "<< x <<endl;
    newnode->right = insert();
    return newnode;
}

//Inorder Traversal(LNR)
void inorder(Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//Preorder Traversal(NLR)
void preorder(Node*root){
     if(root == NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//postorder Traversal(LRV)
void postorder(Node* root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}
int main(){
    //Creating a simple binary Tree
    root = insert();
    cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<"\nPreorder Traversal: ";
    preorder(root);
    cout<<"\nPostorder Traversal: ";
    postorder(root);
    return 0;
}