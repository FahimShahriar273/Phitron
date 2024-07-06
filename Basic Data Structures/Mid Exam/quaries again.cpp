#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void inserthead(Node *& head, Node *& tail, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void inserttail(Node *& head, Node *& tail, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}
void insertposition(Node *& head, Node *& tail, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;

    for (int i = 0; i < pos - 1; ++i)
    {
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }
        tmp = tmp->next;
    }
    if (tmp == NULL || tmp->next == NULL)
    {
        inserttail(head, tail, val);
    }
    else
    {
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }
}
int size(Node * head)
{
    int size = 0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}
void printright(Node * tail)
{
    Node * tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void printleft(Node * head)
{
    Node * tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int n;
    cin >> n;
    while (n--)
    {
        int pos;
        int val;
        cin >> pos >> val;

        if (pos < 0 || pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (pos == 0)
            {
                inserthead(head, tail, val);
            }
            else if (pos == size(head))
            {
                inserttail(head, tail, val);
            }
            else
            {
                insertposition(head, tail, pos, val);
            }
            printleft(head);
            printright(tail);
        }
    }
    return 0;
}
