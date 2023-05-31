#include <iostream>

// Node definition for a binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Recursive function to calculate the sum of nodes at kth level
int sumAtKthLevel(Node* root, int k) {
    if (root == nullptr)
        return 0;

    if (k == 0)
        return root->data;

    return sumAtKthLevel(root->left, k - 1) + sumAtKthLevel(root->right, k - 1);
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int k = 1;
    int sum = sumAtKthLevel(root, k);
    std::cout << "Sum of nodes at level " << k << ": " << sum << std::endl;

    return 0;
}