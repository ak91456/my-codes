#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left,*right;
    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
node *bt(node *root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=bt(root->left,val);
    }
    else{
        root->right=bt(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
int main(){
    node *root=new node(10);
    bt(root,11);
    bt(root,9);
    bt(root,8);
    bt(root,19);
    bt(root,25);
    bt(root,100);
    bt(root,1);
    inorder(root);
}