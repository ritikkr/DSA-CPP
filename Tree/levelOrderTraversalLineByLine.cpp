/*
Level order traversal also known as breadth first traversal 
 */
#include <iostream>
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
void levelOrderTraversalLineByLine(Node *root)
{
   if(root == NULL)
   {
       return;
   }
   queue<Node *> q;
   q.push(root);
   q.push(NULL);
   while (q.size()>1)
   {
       Node *curr = q.front();
       if(curr == NULL)
       {
           cout<<"\n";
           q.push(NULL);
           continue;

       }
       if(curr != NULL)
       {
           cout<<curr->key<<" ";
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
}
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
    levelOrderTraversalLineByLine(root);
    return 0;
}

/* 
Time Complexity = Big O(n)
Auxiliary Space = Big O(n)

 */