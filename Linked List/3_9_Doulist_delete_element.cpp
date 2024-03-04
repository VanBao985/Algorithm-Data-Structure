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
    l -> head -> next = NULL;
    l -> head -> data = x;
    l -> head -> pre = NULL;
    l -> tail = l -> head;
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

douList *deleteHead(douList *l)
{
    node *temp = l -> head;
    l -> head = temp -> next;
    return l;
}

douList *deleteTail(douList *l)
{
    node *temp = l -> tail -> pre;
    temp -> next = NULL;
    l -> tail = temp;
    return l;
}

douList *deleteAt(douList *l, int k)
{
    node *p = l -> head;
    for (int i = 0; i < k -1; i++)
    {
        p = p -> next;
    }
    node *temp = p -> next;
    p -> next = temp -> next;
    return l;
}

void printList (douList *l)
{
    node *p = l -> head;
    while (p != NULL)
    {
        cout << p -> data << " ";
        p = p -> next;
    }
    
}

int main()
{
    int n, x;
    cin >> n >> x;
    douList *l = createList (x);
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        l = addTail(l,x);
    }
    int k; 
    cin >> k;
    if (k == 0) l = deleteHead(l);
    else
    {
        if (k == n-1) l = deleteTail(l);
        else l = deleteAt(l , k);
    }
    printList(l);
}
