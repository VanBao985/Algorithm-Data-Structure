#include<bits/stdc++.h>

using namespace std;

struct node 
{
    int data;
    node *left;
    node *right;
};
node *t = NULL;
int n, x;

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
        if (x < t-> data)
        {
            t -> left = insert(t->left,x);
        }
        else 
        {
            t -> right = insert(t->right,x);
        }
    }
}

void input()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t = insert(t,x);
    }
}

int levelTree(node *t)
{
    if (t==NULL) return -1;
    return 1 + max(levelTree(t->left),levelTree(t->right));
}

bool checkAVL(node *t)
{   
    if (t==NULL) return true;
    int d = (abs(levelTree(t->left)-levelTree(t->right))<=1);
    if (!d) return false;
    return checkAVL(t->left) && checkAVL(t->right);
}

int count(node *t, int x)
{
    if (t==NULL) return 0;
    if (x==t->data) return 1+count(t->left,x)+count(t->right,x);
    else 
    {
        if (x<t->data) return count(t->left,x);
        return count(t->right,x);
    }
}

void solve()
{
    cout << count(t,x);
}

node *turnRight(node *t)
{
    node *a = t -> left;
    node *b = a -> right;
    t -> left = b;
    a -> right = t;
    return a;
}

node *turnLeft(node *t)
{
    node *a = t -> right;
    node *b = a -> left;
    t -> right = b;
    a -> left = t;
    return a;
}


node *updateAVL(node *t)
{
    if (t==NULL) return t;
    if (abs(levelTree(t->left)-levelTree(t->right))>1)
    {
        if (levelTree(t->left)>=levelTree(t->right))
        {
            node *p = t->left;
            if (levelTree(p->left)>levelTree(p->right))
            {
                t = turnRight(t);
            }
            else
            {
                t -> left = turnLeft(t -> left);
                t = turnRight(t);
            }
        }
        else
        {
            node *p = t -> right;
            if (levelTree(p->right)>levelTree(p->left))
            {
                t = turnLeft(t);
            }
            else
            {
                t -> right = turnRight(t -> right);
                t = turnLeft(t);
            }
        }
    }
    if (t -> left != NULL) t -> left = updateAVL(t->left);
    if (t -> right != NULL) t -> right = updateAVL(t ->right);
    return t;
}

int main()
{
    input();
    while (!checkAVL(t))
    {
        t = updateAVL(t);
    }
    cin >> x;
    count (t,x);
    solve();
    return 0;
}