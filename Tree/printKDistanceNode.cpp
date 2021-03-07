#include <iostream>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
void printKDistanceElement(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->key << " ";
    }
    else
    {
        printKDistanceElement(root->left, k - 1);
        printKDistanceElement(root->right, k - 1);
    }
}
Node *createTree()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    return root;
}
int main()
{
    Node *root = createTree();
    int k = 2;
    printKDistanceElement(root, k);
    return 0;
}

/* 
Time Complexity = O(n)
Auxiliary Space = O(h) exactly = O(h+1) height is no of nodes in longest subtree
 */