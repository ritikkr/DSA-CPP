#include <iostream>
#include <algorithm>
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
int height(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
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
    cout<<"Height of given Tree is: "<<height(root);
    return 0;
}

/* 
we're simply traversing every node and we are doing some constant work for every node

Time Complexity = O(n)
Auxiliary Space = O(h) exactly = O(h+1) height is no of nodes in longest subtree
 */