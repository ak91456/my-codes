#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
node *bt(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = bt(root->left, val);
    }
    else
    {
        root->right = bt(root->right, val);
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << "->";
    inorder(root->right);
}
node *insertion()
{
    node *root = nullptr;
    int value;
    cout << "enter a value : ";
    cin >> value;
    root = bt(root, value);
    char choice;
    do
    {
        cout << "do u want to enter another node (y/n) : ";
        cin >> choice;
        if (choice == 'y')
        {
            cout << "enter a value : ";
            cin >> value;
            root = bt(root, value);
        }
    } while (choice == 'y');
    return root;
}
int main()
{
    node *root = insertion();
    cout << "\nThe inorder binary search tree traversal is : \n";
    inorder(root);
    return 0;
}