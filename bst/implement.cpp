#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *insertToBst(node *&root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertToBst(root->right, d);
    }
    else
    {
        root->left = insertToBst(root->left, d);
    }
    return root;
}

void breadthFirst(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
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

void takeInput(node *&root)
{
    int d;
    cin >> d;
    while (d != -1)
    {
        root = insertToBst(root, d);
        cin >> d;
    }
}

int minimum(node *r)
{

    while (r->left != NULL)
    {
        r = r->left;
    }
    cout << "\n Minimum element is: " << r->data;
    return r->data;
}

int maximum(node *r)
{

    while (r->right != NULL)
    {
        r = r->right;
    }
    cout << "\n Maximum element is: " << r->data;
    return r->data;
}

node *deleteFromBst(node *root, int x)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == x)
    {
        // 0 child
        if (root->left == NULL || root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // left child
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL || root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child

        if (root->left != NULL && root->right != NULL)
        {

            int mini = minimum(root->right);
            root->data = mini;
            root->right = deleteFromBst (root->right, mini);
            return root;
        }
    }
    else if (root->data < x)
    {
        deleteFromBst (root->right, x);
        return root;
    }
    else
    {
        deleteFromBst (root->left, x);
        return root;
    }
}

int main(int argc, char const *argv[])
{
    node *root = NULL;
    cout << "Enter data to create a bst: ";
    takeInput(root);

    cout << "printing.. \n";
    breadthFirst(root);

root=deleteFromBst(root, 45);
    cout << "printing.. \n";
    breadthFirst(root);

    return 0;
}
