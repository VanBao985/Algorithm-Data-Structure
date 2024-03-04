#include<iostream>

using namespace std;

struct node 
{
    int data;
    node *left; 
    node *right;
};

node *insert(node *t, int x)
{
    if (t == NULL)
    {
        node *temp = new node;
        temp -> data = x;
        temp -> left = NULL;
        temp -> right = NULL;
        return temp;
    }
    else 
    {
        if (x < t -> data)
        {
            t -> left = insert(t -> left, x);
        }
        else
        {
            t -> right = insert(t -> right, x);
        }   
    }
}

bool checkLeaf(node *t)
{
    if (t -> left == NULL && t -> right == NULL)
    {
        return true;
    }
    return false;
}

int countLeaves(node *t)
{
    if (t==NULL) return 0;
    if (checkLeaf(t)) return 1;
    return countLeaves(t -> left) + countLeaves(t -> right);
}

int main()
{
    int n, x;
    cin >> n;
    node *t = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t = insert(t, x);
    }
    cout << countLeaves(t);
}