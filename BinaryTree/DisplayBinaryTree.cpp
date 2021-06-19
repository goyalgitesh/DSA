#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        Node* lchild;
        int data;
        Node* rchild;
};

void printLevelOrder(Node *root)
{
    // Base Case
    if (root == NULL) return;
 
    // Create an empty queue for level order traversal
    queue<Node *> q;    // we used queue from STL container queue
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false)
    {
        // nodeCount (queue size) indicates number
        // of nodes at current lelvel.
        int nodeCount = q.size();
 
        // Dequeue all nodes of current level and
        // Enqueue all nodes of next level
        while (nodeCount > 0)
        {
            Node *node = q.front();
            cout << node->data << " ";
            q.pop();
            if (node->lchild != NULL)
                q.push(node->lchild);
            if (node->rchild != NULL)
                q.push(node->rchild);
            nodeCount--;
        }
        cout << endl;
    }
}
 
// Utility function to create a new tree node
Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}
 
// Driver program to test above functions
int main()
{
    // Let us create binary tree shown above
    Node *root = newNode(5);
    root->lchild = newNode(8);
    root->rchild = newNode(6);
    root->lchild->rchild = newNode(9);
    root->rchild->lchild = newNode(3);
    root->lchild->rchild->lchild = newNode(4);
    root->lchild->rchild->rchild = newNode(2);

    
    printLevelOrder(root);
    return 0;
}
