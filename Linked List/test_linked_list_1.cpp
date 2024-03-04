#include <bits/stdc++.h>

using namespace std;

struct Node {
    int key;
    Node* next;
};

Node* createNode(int k) {
    Node* newNode = new Node;
    newNode->key = k;
    newNode->next = NULL;
    return newNode;
}

void addLast(Node*& head, int k) {
    Node* newNode = createNode(k);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void addFirst(Node*& head, int k) {
    Node* newNode = createNode(k);
    newNode->next = head;
    head = newNode;
}

void addAfter(Node* head, int u, int v) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->key == v) {
            Node* newNode = createNode(u);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
}

void addBefore(Node*& head, int u, int v) {
    if (head == NULL) {
        return;
    }
    if (head->key == v) {
        addFirst(head, u);
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->key == v) {
            Node* newNode = createNode(u);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
}

void remove(Node*& head, int k) {
    if (head == NULL) {
        return;
    }
    if (head->key == k) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->key == k) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            break;
        }
        temp = temp->next;
    }
}

void reverse(Node*& head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->key << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        addLast(head, a);
    }
    string command;
    cin >> command;
    while (command != "#") {
        int k;
        int u, v;
        if (command == "addlast") 
        {
            cin >> k;
            addLast(head, k);
        } 
        if (command == "addfirst") 
        {
            addFirst(head, k);
        } 
        if (command == "addafter") 
        {
            cin >> u >> v;
            addAfter(head, u, v);
        } else if (command == "addbefore") 
        {
            cin >> u >> v;
            addBefore(head, u, v);
        }
        if (command == "remove") 
        {
            remove(head, k);
        }       
        if (command == "reverse") 
        {
            reverse(head);
        }
    }
    printList(head);
    return 0;
}