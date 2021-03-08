#include<iostream>
#include<queue>
using namespace std;
int maxLevel = 0;
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int data)
    {
        key = data;
        left = right = NULL;
    }
};
Node* createTree()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    return root;
}
void printLeft(Node *root, int level)
{
    if(root == NULL)
    return ;
    if(maxLevel < level)
    {
        cout<<root->key<<" ";
        maxLevel = level;
    }
    printLeft(root->left, level+1);
    printLeft
}
void printLeftView(Node *root)
{

}
int main()
{
    Node *root = createTree();
    printLeftViewTree(root);
    return 0;
}