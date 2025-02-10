#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the binary tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to mirror the binary tree
void mirrorTree(struct Node* root) {
    if (root == NULL) 
        return;

    // Swap the left and right subtrees
    struct Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Recursively call for left and right subtrees
    mirrorTree(root->left);
    mirrorTree(root->right);
}

// Function to perform Inorder Traversal
void inorderTraversal(struct Node* root) {
    if (root == NULL) 
        return;
    
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Driver Code
int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    printf("Inorder traversal before mirroring: \n");
    inorderTraversal(root);
    
    mirrorTree(root);

    printf("\nInorder traversal after mirroring: \n");
    inorderTraversal(root);

    return 0;
}
