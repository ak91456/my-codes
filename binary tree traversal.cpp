#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
 
void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}

void postorder(node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}
//levelorder is the travesal 
void levelorder(node *root){
    if(root==NULL){
        return;
    }
//making a queue to store the value of nodes 
//and then adding null so to tell whether the
//root has ended or not
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<"->";
        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}


int main(){
    node *root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<"preorder \n";
    preorder(root);
    cout<<"\ninorder\n";
    inorder(root);
    cout<<"\npostorder\n";
    postorder(root);
    cout<<"\nlevelorder\n";
    levelorder(root);
    return 0;
}

/*

    my binary tree
       1
     /   \
    2     3
   / \   /  \
  4   5  6   7  
  
*/