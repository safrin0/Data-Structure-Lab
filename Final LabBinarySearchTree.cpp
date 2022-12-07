#include"bits/stdc++.h"
#include<iostream>
using namespace std;
 struct Node{
 int data;
 struct Node* left;
struct Node* right;
    Node(int val) {
    data=val;
    left=NULL;
    right=NULL;
    }
};
 void preorder(struct Node* root){
    if(root==NULL) {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
 }
void inorder(struct Node* root) {
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct Node* root) {
    if(root==NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
     }
 Node* searchinBST(Node* root,int key) {
    if(root==NULL) {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return searchinBST(root->left,key);
    }
    return searchinBST(root->right,key);
}
int main()
{
    struct Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(7);
    root->left->left=new Node(2);
    root->left->right=new Node(1);
    root->right->left=new Node(9);
    root->right->right=new Node(6);
    cout<<" Preorder: "<<endl;
    preorder(root);
    cout<<" Inorder: "<<endl;
   inorder(root);
    cout<<" Postorder: "<<endl;
   postorder(root);
   cout << "               Enter a value to search: ";
    int s;
    cin >> s;
    cout << endl;
    if (searchinBST(root, 8) == NULL) {
        cout << "Found" << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

   return 0;
}
