#include <iostream>
using namespace std;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
class BST
{
    Node *root;
    Node *insert_rec(Node *root, int k)
    {
        if (root == NULL)
        {
            return new Node(k);
        }
        if (k < root->key)
        {
            root->left = insert_rec(root->left, k);
        }
        else
        {
            root->right = insert_rec(root->left, k);
        }
        return root;
    }

public:
    BST()
    {
        root = NULL;
    }
    void insert(int k)
    {
        root = insert_rec(root, k);
    }
    void inorder(Node *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            cout << root->key << " ";
            inorder(root->right);
        }
    }

    void display()
    {
        inorder(root);
        cout << endl;
    }
};

int main()
{
    BST obj;
    obj.insert(5);
    obj.insert(3);
    obj.insert(7);
    obj.insert(10);

    obj.display();
    return 0;
}
