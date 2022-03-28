#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int val;
    struct node* left;
    struct node* right;
}node;

void preorder(node * root){
    if(root){
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        cout<<root->val<<" ";
    }
}

void inorder(node* root){
    if(root){
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
}


node* create(int val){
   node * root = new node;
   root->val = val;
   root->left = nullptr;
   root->right = nullptr;
   return  root;
}

int main(){
    node * root = new node;
    root->val = 12;

    node * l1 = create(56);
    node * r1 = create(76);
    root->left = l1;
    root->right = r1;

    node* l2 = create(89);
    node* r2 = create(78);
    l1->left = l2;
    l1->right = r2;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);



    return 0;
}