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
void inOrder(Node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        cout<<root->key<<" ";
        inOrder(root->right);
    }
}
Node* createTree()
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
    inOrder(root);
    return 0;
}

/* 
Time Complexity = O(n)
Auxiliary Space = O(h) exactly = O(h+1) height is no of nodes in longest subtree
 */