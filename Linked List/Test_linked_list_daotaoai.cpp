#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *createNode(int x)
{
    node *temp = new node;
    temp -> data = x;
    temp -> next = NULL;
    return temp;
}

node *addElement(node *l, int x)
{
    node *temp = createNode(x);
    l -> next = temp;
    return temp;
}

void printList(node *l)
{
    node *p = l;
    while (p != NULL)
    {
        cout << p -> data << " ";
        p = p -> next;
    }
}

bool check(node *l, int x)
{
    node *p = l;
    while (p != NULL)
    {
        if ((p -> data) == x)
        {
            return true;
        }
        p = p -> next;
    }
    return false;
}

node *addHead(node *l, int x)
{
    node *p = l;
    node *temp = new node;
    temp -> data = x;
    temp -> next = p;
    return temp;
}

node *addTail(node *l, int x)
{
    node *p = l;
    while ((p->next)!=NULL)
    {
        p = p -> next;
    }
    node *temp = new node;
    temp -> data = x;
    p -> next = temp;
    temp -> next = NULL;
    return l;
}

node *addAfter(node *l, int u, int v)
{
    node *p = l;
    while (p->data != v)
    {
        p = p -> next;
    }
    node *temp = new node;
    temp -> data = u;
    temp -> next = p -> next;
    p -> next = temp;
    return l;
}

node *addBefore(node *l, int v, int u)
{
    node *p = l;
    while ((p->next)->data != v)
    {
        p = p -> next;
    }
    node *temp = new node;
    temp -> data = u;
    temp -> next = p -> next;
    p -> next = temp;
    return l;
}

node *remove(node *l, int k)
{
    node *p = l;
    while ((p -> next) -> data!=k)
    {
        p = p -> next;
    }
    node *temp = p -> next;
    p -> next = temp -> next;
    return l;
}

node *reverse(node *l)
{
    node *p = l;
    node *pre=NULL, *next= NULL;
    while ((p)!=NULL)
    {
        next = p -> next;
        p -> next = pre;
        pre = p;
        p = next;
    }
    return pre;
}

int main()
{
    int n, x, k;
    cin >> n >> x;
    node *l = createNode(x);
    node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    /*  cin >> k;
    if (!check(l,k))
    {
        l = addTail(l, k);
    }
    cin >> k;
    if (!check(l, k))
    {
        l = addTail(l, k);
    }
    cin >> k;
    if (!check(l, k))
    {
        l = addHead(l, k);
    }
    int u, v;
    cin >> u >> v;
    if (!check(l, u) && check(l, v))
    {
        l = addAfter(l, u, v);
    }
    cin >> k;
    l = remove(l, k);  */
    l = reverse(l);
    printList(l); 
    return 0;
}