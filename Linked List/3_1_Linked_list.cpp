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

void printList(node *p)
{
    node *l=p;
    while(l!=NULL)
    {
        cout << (l -> data) << " ";
        l = l -> next;
    }
}
node *addElement(node *p, int x)
{
    node *temp = createNode(x);
    p -> next = temp;
    return temp;
}

int main()
{
    int n, x;
    cin >> n >> x;
    node *l = createNode(x);
    node *p = l;
    for (int i=0;i<n-1; i++)
    {
        cin >> x;
        p = addElement(p,x);
    }
    printList(l);
    return 0;
}







