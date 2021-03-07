#include <iostream>
#include <algorithm>
#include <queue>
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
int getMaxNonRecursive(Node *root)
{
    if(root == NULL)
    {
        return INT32_MIN;
    }
    queue<Node *> q;
    q.push(root);
    int max = 0;
    while(!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if(curr->key > max )
        {
            max = curr->key;
        }
        if(curr->left != NULL)
        {
            q.push(curr->left);
        }
        if(curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
    return max;
}
int getMax(Node *root)
{
    if(root == NULL)
    {
        return INT16_MIN;
    }
    else
    {
        return max(root->key, max(getMax(root->left), getMax(root->right)));
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
    cout<<"maximum of given Tree is: "<<getMax(root)<<endl;
    cout<<"maximum of given Tree usign non recursive function or method is: "<<getMaxNonRecursive(root);
    return 0;
}

/* 
if you're binary tree is skewed then recursive solution is bad 
but if you've a perfect tree then recursive is good because in non recursive your queue requires more space

 */