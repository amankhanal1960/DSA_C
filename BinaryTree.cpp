#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    else
    {
        if (data > root->data)
        {
            root->right = insertNode(root->right, data);
        }
        else if (data < root->data)
        {
            root->left = insertNode(root->left, data);
        }
    }

    return root;
}

struct Node *findMin(struct Node *root)
{
    while (root && root->left != NULL)
    {
        // Traverse to the leftmost node
        root = root->left;
    }
    return root; // Return the leftmost (minimum value) node
}

struct Node *deleteNode(struct Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }

    if (key < root->data)
    {
        // If the value is smaller, delete it from the left subtree
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        // If the value is larger, delete it from the right subtree
        root->right = deleteNode(root->right, key);
    }

    else

    {
        // Node to be deleted is found
        if (root->left == NULL)
        {
            // Node has no left child or is a leaf node
            struct Node *temp = root->right; // Store the right child
            free(root);                      // Free the current node
            return temp;                     // Return the right child
        }
        else if (root->right == NULL)
        {
            // Node has no right child
            struct Node *temp = root->left; // Store the left child
            free(root);                     // Free the current node
            return temp;                    // Return the left child
        }

        // Node has two children
        struct Node *temp = findMin(root->right);          // Find the smallest value in the right subtree
        root->data = temp->data;                           // Replace current node's value with it
        root->right = deleteNode(root->right, temp->data); // Delete the smallest node in the right subtree
    }

    return root; // Return the updated root
}

void inorderTraversal(struct Node *root) //(left, root, right)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void PreorderTraversal(struct Node *root) //(root, left, right)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }
}

void postorderTraversal(struct Node *root) //(left, right, root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    Node *root = NULL;
    root = insertNode(root, 20);
    root = insertNode(root, 25);
    root = insertNode(root, 15);
    root = insertNode(root, 10);
    root = insertNode(root, 5);
    root = insertNode(root, 30);
    root = insertNode(root, 22);
    root = insertNode(root, 35);

    inorderTraversal(root);
    printf("\n");

    PreorderTraversal(root);
    printf("\n");

    postorderTraversal(root);
    printf("\n");

    deleteNode(root, 5);

    inorderTraversal(root);

    return 0;
}
