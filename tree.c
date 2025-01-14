#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Function to invert the binary tree
struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }

    // Swap the left and right subtrees
    struct TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Recursively invert the left and right subtrees
    invertTree(root->left);
    invertTree(root->right);

    return root;
}

// Function to create a new tree node
struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

// Function to print inorder traversal of the tree
void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->val);
    inorderTraversal(root->right);
}

// Driver code to test the function
int main() {
    // Example tree: [1, 2, 3, 4, 5, 6, 7]
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    printf("Original tree (inorder): ");
    inorderTraversal(root);
    printf("\n");

    // Invert the binary tree
    root = invertTree(root);

    printf("Inverted tree (inorder): ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
