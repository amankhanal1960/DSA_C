#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *createTree(node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    node *newnode = new node(data);

    cout << "Enter the data for inserting in the left of " << data << ": ";
    newnode->left = createTree(newnode->left);

    cout << "Enter the data for inserting in the right of " << data << ": ";
    newnode->right = createTree(newnode->right);

    return newnode;
}

void levelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *frontnode = q.front();
        q.pop();

        if (frontnode != NULL)
        {
            cout << "Data extracted: " << frontnode->data << endl;
            if (frontnode->left)
            {
                q.push(frontnode->left);
            }
            if (frontnode->right)
            {
                q.push(frontnode->right);
            }
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << "Extracted data is " << root->data << endl;
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << "Extracted data is " << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << "Extracted data is " << root->data << endl;
}

int main()
{
    node *root = NULL;
    root = createTree(root);

    cout << "\nLevel Order Traversal:\n";
    levelOrder(root);

    cout << "\nInorder Traversal:\n";
    inorder(root);

    cout << "\nPreorder Traversal:\n";
    preorder(root);

    cout << "\nPostorder Traversal:\n";
    postorder(root);

    return 0;
}
