#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *& head, Node *& tail, string val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void visit(Node *& cur, Node * head, string add )
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == add)
        {
            cur = tmp;
            cout << cur->val << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

void next(Node *& cur)
{
    if (cur->next != NULL)
    {
        cur = cur->next;
        cout << cur->val << endl;
        return;
    }

    cout << "Not Available" << endl;
}

void prev(Node *& cur)
{
    if (cur->prev != NULL)
    {
        cur = cur->prev;
        cout << cur->val << endl;
        return ;
    }

    cout << "Not Available" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string s;
    while (cin >> s)
    {
        if (s == "end")
        {
            break;
        }
        insert_at_tail(head, tail, s);
    }
    int n;
    cin >> n;
    Node * cur = head;

    while (n--)
    {
        string com, add;

        cin >> com;

        if (com == "visit")
        {
            cin >> add;
            visit(cur, head, add);
        }
        else if (com == "next")
        {
            next(cur);
        }
        else if (com == "prev")
        {
            prev(cur);
        }
    }

}
