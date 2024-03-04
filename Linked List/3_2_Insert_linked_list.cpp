#include<iostream>

using namespace std;

struct node{
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
node *addElement(node *p, int x)
{
    node *temp = createNode(x);
    p -> next = temp;
    return temp;
}
void printList(node *l)
{
    node *p = l;
    while(p != NULL)
    {
        cout << p -> data << " ";
        p = p -> next;
    }
}
node *addHead(node *p, int x)
{
    node *temp = createNode(x);
    temp -> next = p;
    return temp;
}
node *addTail(node *l, int x)
{
    node *p = l;
    while ((p->next)!=NULL)
    {
        p=p->next;
    }
    node *tmp = createNode(x);
    p -> next = tmp;
    return l;
}
node *addAt(node *p, int k, int x)
{
    node *l = p;
    for (int i = 1; i < k; i++)
    {
        l = l->next;
    }
    node *temp = new node;
    temp -> data = x;
    (temp -> next) = (l -> next);
    l -> next = temp;
    return p;
}

int main()
{
    int n, m;
    cin >> n >> m;
    node *l = createNode(m);
    node *p=l;
    for (int i=1; i<n;i++)
    {
        int x;
        cin >> x;
        p = addElement(p,x);
    }
    int x, k;
    cin >> k >> x;
    if (k==0) l = addHead(l,x);
    else
    {
        if (k==n)  l = addTail(l, x);
        else   l = addAt(l, k, x);
    }
    printList(l);
}
