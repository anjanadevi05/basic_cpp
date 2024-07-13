#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the binary tree
struct TreeNode* insertNode(struct TreeNode* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (root->left == NULL) {
        root->left = insertNode(root->left, data);
    } else if (root->right == NULL) {
        root->right = insertNode(root->right, data);
    } else {
        // If both left and right child exist, recursively insert into the left subtree
        root->left = insertNode(root->left, data);
    }

    return root;
}

// Function to traverse the binary tree in inorder
void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function to free the memory allocated for the binary tree
void freeTree(struct TreeNode* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int value;

    do {
        printf("Enter a value to insert into the binary tree (or -1 to exit): ");
        scanf("%d", &value);

        if (value != -1) {
            root = insertNode(root, value);
        }
    } while (value != -1);

    printf("Inorder traversal of the binary tree: ");
    inorderTraversal(root);
    printf("\n");

    freeTree(root);

    return 0;
}

