#include<bits/stdc++.h>
using namespace std;

class Node{
 public:
  int data;
  Node *left , *right;
  Node(int value){
    data=value;
    left=right=NULL;
  }
};

Node* binary_tree(){
    int x;
    cin>>x;
    if(x==-1) return NULL;
    Node *temp=new Node(x);
    //left side
    cout<<"enter left child of "<<x<<" : ";
    temp->left=binary_tree();
    //right side
    cout<<"enter right child of "<<x<<" : ";
    temp->right=binary_tree();
    return temp;
}

void preorder_traversal(Node *root){
    if(root == NULL) return ;
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void inorder_traversal(Node *root){
    if(root == NULL) return ;
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}

void postorder_traversal(Node *root){
    if(root == NULL) return ;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" "; 
}

int main(){
    cout<<"enter root node : ";
    Node* root;
    root=binary_tree();
    cout<<"Pre-order traversal : "<<endl;
      preorder_traversal(root);
    cout<<"\n inorder traversal : "<<endl;
      inorder_traversal(root);
    cout<<"\n post_order traversal : "<<endl;
      postorder_traversal(root);
 return 0;
}