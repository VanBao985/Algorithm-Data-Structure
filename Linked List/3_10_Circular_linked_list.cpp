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
    temp -> next = temp; // circular_linked
    return temp;
}

node *addTail(node *l, int x)
{
    node *p =l;
    while (p->next != l)
    {
        p = p -> next;
    }
    node *temp = new node;
    temp -> data = x;
    temp -> next = l;
    p -> next = temp;
    return l;
}

void printList(node *l, int k)
{
    node *p = l;
    for (int i = 1; i <= k; i++)
    {
        p = p-> next;
    }
    node *temp = p;
    do
    {
        cout << p -> data << " ";
        p = p -> next;
    }
    while (p != temp);
}

int main()
{
    int n, x;
    cin >> n >> x;
    node *l = createNode(x);
    node *p =l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        l = addTail(l, x);
    }
    int k; 
    cin >> k;
    printList(l, k);
    return 0;
}