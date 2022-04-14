#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int val;
    struct node* left;
    struct node* right;
}node;


node* create(int val){
   node * root = new node;
   root->val = val;
   root->left = NULL;
   root->right = NULL;
   return  root;
}


node* rec_search(node* n,int val){
    if(n==nullptr){
        cout<<"Not found"<<endl;
        return n;
    }
    if(n->val == val){
        cout<<"found"<<endl;
        return n;
    }
    else if(n->val > val){
        return rec_search(n->left,val);
    }
    return rec_search(n->right,val);
}

node* loop_serach(node* n,int val){
    while(n){
        if(n->val == val) return n;
        else if(n->val > val) n = n->left;
        else if(n->val<val)n = n->right;
    }
    return NULL;
}
void insert(node* root, int val){
    node* ptr1 = root;
    node* prev = root;
    while(ptr1){
        prev = ptr1;
        if(ptr1->val==val) return;
        else if(ptr1->val > val) ptr1 = ptr1->left;
        else if(ptr1->val < val) ptr1 = ptr1->right;
    }
    node* temp = create(val);
    if(val < prev->val){
        prev->left = temp;
    }
    else{
        prev->right = temp;
    }    


}

int main(){
    node* root = create(50);
    node* n1 = create(30);
    node* n2 = create(80);

    root->left = n1;
    root->right = n2;

    node* n3 = create(20);
    node* n4 = create(40);

    n1->left = n3;
    n1->right = n4;

    node* n5 = create(60);
    node* n6 = create(90);

    n2->left = n5;
    n2->right = n6;
    // node* ptr = root;
    // ptr = loop_serach(ptr,908);
    // if(ptr){
    //     cout<<"found"<<endl;
    //     cout<<ptr->val<<endl;
    // }
    // else cout<<"NULL"<<endl;
    insert(root,34);
    cout<<root->left->right->left->val<<endl;

    return 0;
}