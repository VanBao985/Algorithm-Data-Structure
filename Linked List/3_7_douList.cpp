#include<iostream>

using namespace std;

struct node 
{
    int data;
    node *next;
    node *pre;
};

struct douList 
{
    node *head;
    node *tail;
};

douList *createList(int x) 
{
    douList *l = new douList; 
    l -> head = new node; 
    l -> head -> data = x;
    l -> head -> next = NULL;
    l -> head -> pre = NULL;
    l -> tail = l -> head; 
    return l;
}

douList *addHead(douList *l, int x)
{
    node *temp = new node;
    temp -> data = x;
    temp -> next = l -> head;
    temp -> pre = NULL;
    l -> head -> pre = temp;
    l -> head = temp;
    return l;
}

douList *addTail(douList *l, int x)
{
    node *temp = new node;
    temp -> data = x;
    temp -> next = NULL;
    temp -> pre = l -> tail;
    l -> tail -> next = temp;
    l -> tail = temp;
    return l;
}

void printList(douList *l)
{
    node *p =  l -> tail;
    while (p!=NULL)
    {
        cout << p -> data  << " ";
        p = p -> pre;
    }
}

int main()
{
    int n;
    cin >> n;
    douList *l = createList(1);
    for (int i=1; i<n;i++)
    {
        l = addHead(l, i+1);
        l = addTail(l, i+1);
    }
    printList(l);
}