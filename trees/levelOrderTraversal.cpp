#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int x){
        data = x;
        right = NULL;
        left = NULL;

    }

};

node* buildTree(node* root){
    cout<<"\nEnter:";
    int d;
    cin>>d;
root = new node(d);

    if (d == -1)
    {
        return NULL;
    }

    cout<<"Enter left element for element "<<d;
    root->left = buildTree(root->left);
    
    cout<<"Enter right element for element "<<d;
    root->right = buildTree(root->right);

    
}

void breadthFirst(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<<" ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            
            
        }
        
    }
}

void inorder(node* root){
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void preorder(node* root){
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void buildFromLevel(node* &root)
{
    queue<node*> q;
    cout<<"Enter data: ";
    int data;
    cin>>data;
    root = new node(data);
     q.push(root);
     while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<" ";
        int left;
        cin>>left;
        if (left!=-1)
        {
            temp->left = new node(left);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<" ";
        int right;
        cin>>right;
        if (right!=-1)
        {
            temp->right = new node(right);
            q.push(temp->right);
        } 
        
     }
}
int main(int argc, char const *argv[])
{
    
    node* root = NULL;
    // root = buildTree(root);

    // breadthFirst(root);
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // preorder(root);
    buildFromLevel(root);
    breadthFirst(root);
    return 0;
}
