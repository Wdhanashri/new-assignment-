#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};


int isValidBSTHelper(struct TreeNode* root, int minVal, int maxVal) {
    if (root == NULL) {
        return 1; 
    }
    
    
    if (root->val <= minVal || root->val >= maxVal) {
        return 0; 
    }
    
    
    return isValidBSTHelper(root->left, minVal, root->val) &&
           isValidBSTHelper(root->right, root->val, maxVal);
}


int isValidBST(struct TreeNode* root) {
    return isValidBSTHelper(root, INT_MIN, INT_MAX);
}


struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    
    struct TreeNode* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->right->left = createNode(11);
    root->right->right = createNode(20);

    if (isValidBST(root)) {
        printf("The tree is a valid Binary Search Tree.\n");
    } else {
        printf("The tree is NOT a valid Binary Search Tree.\n");
    }

    return 0;
}
