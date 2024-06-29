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


void print(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


void deleteHead(Node*& head) {
    if (head == NULL) return;

    Node* delNode = head;
    head = head->next;
    delete delNode;
}

void deleteAtPosition(Node*& head, int pos) {
    if (pos == 0) {
        deleteHead(head);
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < pos - 1 && tmp != NULL; ++i) {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL) return;

    Node* delNode = tmp->next;
    tmp->next = tmp->next->next;
    delete delNode;
}



void insertHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}


int main() {
    int t;
    cin >> t;
    Node* head = NULL;

    while (t--) {
        int o, v;
        cin >> o >> v;

        if (o == 0) {
            insertHead(head, v);
        } else if (o == 1) {
            insertTail(head, v);
        } else if (o == 2) {
            deleteAtPosition(head, v);
        }

        print(head);
    }

    return 0;
}
