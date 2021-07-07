#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node *lchild;
    int data;
    Node *rchild;
}*root = NULL;


class Tree {

    public:
    Tree();
    ~Tree();
     void CreateTree();
     void Levelorder(Node* p);
     void Levelorder() { Levelorder(root); }
     int countNodes(Node* p);
     int height(Node *p);

};

Tree::Tree() {
    root = nullptr;
}
 
Tree::~Tree() {
    // TODO
}

void Tree::CreateTree() {
    Node *p;
    Node *t;

    root = new Node;

    queue<Node*> q;

    cout<<"Enter root data"<<endl;
    int x;
    cin>>x;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    q.push(root);

     while (! q.empty()){
        p = q.front();
        q.pop();
 
        cout << "Enter left child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.emplace(t);
        }
 
        cout << "Enter right child data of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.emplace(t);
        }
    }
}

void Tree::Levelorder(Node *p) {
    queue<Node*> q;
    cout << root->data << ", " << flush;
    q.emplace(root);
 
    while (! q.empty()){
        p = q.front();
        q.pop();
 
        if (p->lchild){
            cout << p->lchild->data << ", " << flush;
            q.emplace(p->lchild);
        }
 
        if (p->rchild){
            cout << p->rchild->data << ", " << flush;
            q.emplace(p->rchild);
        }
    }
}

int Tree::countNodes(Node *p) {
    int x,y;
    if(p!=NULL) {
       return countNodes(p->lchild) + countNodes(p->rchild) + 1;
        
    }
    return 0;
}

int Tree::height(Node *p) {
    int x = 0;
    int y = 0;
    if(p==0) return 0;
    x = height(p->lchild);
    y = height(p->rchild);

    if(x>y) return x+1;
    else return y+1;

}



int main() {

    Tree t;
    t.CreateTree();
    int c = t.countNodes(root);
    int h = t.height(root);
    t.Levelorder(root);
    cout<<"Height of Tree: "<<h<<endl;
    cout<<"Total nodes in Tree: "<<c<<endl;


    return 0;

}