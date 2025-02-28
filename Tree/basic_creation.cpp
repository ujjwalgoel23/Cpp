                               // IMPLEMENTATION OF BINARY TREE BY LEVEL WISE METHOD
// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node* left,*right;

//     Node(int value)
//     {
//         data=value;
//        left=right=NULL;
//     }
// };

// int main(){
//     int x,first,second;
//     cout<<"enter the root element :";
//     cin>>x;
//     queue<Node*>q;
//     Node *root=new Node(x);
//     q.push(root);

//     //build the binary tree
//     while(!q.empty())
//     {
//         Node *temp=q.front();
//         q.pop();
//         cout<<"enter the left child of "<< temp->data<<" : ";
//         cin>>first; 
//         //left node
//         if(first!=-1){
//             temp->left=new Node(first);
//             q.push(temp->left);
//         }
//         // right node
//         cout<<"enter the right child of "<< temp->data<<" : ";
//         cin>>second;
//         if(second!=-1){
//             temp->right=new Node (second);
//             q.push(temp->right);
//         }
        

//     }
//     return 0;
// }

//         IMPEMENTATION :- firstly we build left side and then right side completely

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left,*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

Node* BinaryTree(){
 int x;
 cin>>x;
 if(x==-1)return NULL;
 Node *temp=new Node(x);
 //left side
 cout<<"enter left child of "<<x<<" ";
 temp->left=BinaryTree();
 //right side
 cout<<"enter right child of "<<x<<" ";
 temp->right=BinaryTree();
 return temp;
}

int main(){
    cout<<"enter root node : ";
    Node* root;
    root=BinaryTree();
return 0;
}