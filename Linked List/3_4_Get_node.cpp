#include<iostream>

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

node *addElement(node *p, int x)
{
    node *temp = createNode(x);
    p -> next = temp;
    return temp;
}

void printList(node *p)
{
    node *l =p;
    while (p!=NULL)
    {
        cout << p -> data << " ";
        p = p -> next;
    }
}

node *getNode(node *l, int k)
{
    node *p = l;
    for (int i=0; i< k; i++)
    {
        p = p -> next;
    }
    return p;
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
        p = addElement(p,x);
    }
    cin >> k;
    l = getNode(l, k);
    cout << l -> data;
    return 0;
}

