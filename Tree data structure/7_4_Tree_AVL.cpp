#include<bits/stdc++.h> 

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

int levelTree(node *t)
{
    if (t == NULL)   return -1;
    return 1 + max(levelTree(t->left), levelTree(t->right));
}

bool checknode(node *t)
{
    return (abs(levelTree(t -> left) - levelTree(t -> right)) <= 1);
}

bool checkAVL(node *t)
{
    if (t==NULL) return true;
    if (!(abs(levelTree(t -> left) - levelTree(t -> right)) <= 1))   
    return false;
    else return checkAVL(t -> left) && checkAVL(t -> right);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    node *t = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t = insert(t, x);
    }
    if (!checkAVL(t)) cout << "false";
    else    cout << "true";
    return 0;
}