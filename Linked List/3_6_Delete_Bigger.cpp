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

node *addElement(node *l, int x)
{
    node *temp = createNode(x);
    l -> next = temp;
    return temp;
}

void printList(node *l)
{
    node *p = l;
    while (p!=NULL)
    {
        cout << p -> data << " ";
        p = p -> next;
    }
}

node *addTail(node *l, int x)
{
    node *p=l;
    while(p->next!=NULL)
    {
        p = p -> next;
    }
    node *temp = createNode(x);
    p -> next = temp;
    return l;
}

node *deleteBigger(node *l, int k)
{
    node *p=l;
    node *ans = new node;
    while (p!=NULL)
    {
        if (p->data<=k)
        {
            ans = createNode(p->data);
            break;
        }
        p=p->next;
    }
    p = p->next;
    while (p!=NULL)
    {
        if (p -> data <=k)
        {
            ans = addTail(ans,p->data);
        }
        p = p -> next;
    }
    return ans;
}

node *getnode(node *l, int k)
{
    node *p = l;
    for (int i=0; i<k; i++)
    {
        p = p -> next;
    }
    return p;
}

int main()
{
    int n, x;
    cin >> n >> x;
    node *l=createNode(x);
    node *p= l;
    for (int i=1; i<n; i++)
    {
        cin >> x;
        p = addElement(p,x);
    }
    int k;
    cin >> k;
    node *ans = deleteBigger(l, getnode(l, k) -> data);
    printList(ans);
    return 0;
}