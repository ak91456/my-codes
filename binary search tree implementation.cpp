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
    int a;
    cout<<"enter the value of root : ";
    cin>>a;
    node *root=new node(a);
    int count;
    cout<<"Enter the number of elements : ";
    cin>>count;
    cout<<"enter values : \n";
    for(int i=0;i<count;i++){
        cin>>a;
        bt(root,a);
    }
    inorder(root);
}