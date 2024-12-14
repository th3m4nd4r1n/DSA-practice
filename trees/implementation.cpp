#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int d){
        data = d;
        right = NULL;
        left=NULL;
    }
    
 
};

Node* buildTree(Node* root){
    cout<<" Enter data: ";
    int d;
    cin>>d;
    root = new Node(d);

    if (d == -1)
    {
        return NULL;
    }

    cout<<"\nEnter data for left "<<d;
    root->left = buildTree(root->left);
    cout<<"\nEnter data for right "<<d;
    root->right = buildTree(root->right);
    return root;
    
}

int main(int argc, char const *argv[])
{
    Node* root = NULL;

    root = buildTree(root);

    return 0;
}
