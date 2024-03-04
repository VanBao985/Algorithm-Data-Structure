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

void printList(node *l)
{
    node *p=l;
    while (p!=NULL)
    {
        cout << p->data <<  " ";
        p = p -> next;
    }
}

node *convert(node *l, int a, int b)
{
    node *p = l;
    while (p!=NULL)
    {
        if (p->data==a) p->data=b;
        p=p->next;
    }
    return l;
}

int main()
{
    int n, x, a, b;
    cin >> n >> x;
    node *l= createNode(x);
    node *p=l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p,x);
    }
    cin >> a >> b;
    l = convert(l, a, b);
    printList(l);
    return 0;
}
