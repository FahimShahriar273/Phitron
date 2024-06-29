#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void removeDuplicates(Node* head) {
    for (Node* i = head; i != NULL; i = i->next) {
        Node* prev = i;
        for (Node* j = i->next; j != NULL;) {
            if (j->val == i->val) {
                Node* temp = j;
                prev->next = j->next;
                j = j->next;
                delete temp;
            } else {
                prev = j;
                j = j->next;
            }
        }
    }
}

void printList(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int v;
    while (true) {
        cin >> v;
        if (v == -1) break;
        insert_tail(head, tail, v);
    }

    removeDuplicates(head);
    printList(head);

    return 0;
}
