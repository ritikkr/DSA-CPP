#include <iostream>
#include <queue>
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
int sizeOfTreeUsingQueue(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    int count = 0;
    while(!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        count++;
        if(curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr ->right != NULL)
        {
            q.push(curr->right);
        }
    }
    return count;
}
int getSize(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return 1+getSize(root->left)+getSize(root->right);
    }
}
Node *createTree()
{
    Node *root = new Node(10);
    root->left = new Node(80);
    root->right = new Node(70);
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    return root;
}
int main()
{
    Node *root = createTree();
    int size1 = sizeOfTreeUsingQueue(root);
    int size2 = getSize(root);
    cout<<"Size2: "<< size2<<endl; 
    cout<< "Size of given tree: "<<size1<<endl;

   return 0;
}