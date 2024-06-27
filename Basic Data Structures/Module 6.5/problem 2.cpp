#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;

}

int main()
{
    Node *head = NULL;
    //int n=0;
    int cnt[101]={0};
    while (true)
    {

        int v;
        cin >> v;
        if(v== -1)
            break;
        insert_at_tail(head, v);
       // n++;
        cnt[v]++;


    }
   // print_linked_list(head);

    int flg=0;
    for(int i=0; i<=100; i++)
    {
        //cout<<cnt[i]<<endl;

        if(cnt[i]>1)
        {
            cout<<"YES"<<endl;
            flg++;
            break;
        }
    }
    if(flg==0)
        cout<<"NO"<<endl;
    return 0;
}

