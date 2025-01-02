#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

void inorder(struct TreeNode* root) {
    if (root == NULL) {
        return;  
    }
    inorder(root->left);   
    printf("%d ", root->data);  
    inorder(root->right);   
}

int main() {
    
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("In-order Traversal: ");
    inorder(root);
    printf("\n");

    return 0;
}
