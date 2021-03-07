#include<iostream>
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
    Node(int data)
    {
        key = data;
        left = right = NULL;
    }

};
Node *createTree()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    return root;
}
int main()
{
    Node *root = createTree();
    levelOrderTraversal(root);
    return 0;
}