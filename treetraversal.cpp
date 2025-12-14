#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        left = right = NULL;
        data = value;
    }
};

void preorder(Node *root)
{
    if (root == NULL)
        return;

    // Node
    cout << root->data << "  ";

    // Left

    preorder(root->left);
    // Right
    preorder(root->right);
};

void Inorder(Node *root)
{
    if (root == NULL)
        return;

    // Left
    Inorder(root->left);
    // Node
    cout << root->data << "  ";
    // right
    Inorder(root->right);
};
void postorder(Node *root)
{
    if (root == NULL)
        return;

    // left
    postorder(root->left);

    // right
    postorder(root->right);

    // node
    cout << root->data << "  ";
};
Node *BinaryTree()
{
    int x;
    cin >> x;

    if (x == -1)
        return NULL;
    Node *temp = new Node(x);
    // left side create
    cout << "Enter the left child of  " << x << "  : ";
    temp->left = BinaryTree();
    // right side create
    cout << "Enter the right child of  " << x << "  : ";
    temp->right = BinaryTree();
    return temp;
}

int main()
{
    cout << "Enter the root Node:";
    Node *root;
    root = BinaryTree();

    // tree creation code

    // preorder print;
    cout << "preorder: ";
    preorder(root);

    // Inorder print;
    cout << " Inorder: ";
    Inorder(root);

    // postorder print;
    cout << "postorder: ";
    postorder(root);
}
