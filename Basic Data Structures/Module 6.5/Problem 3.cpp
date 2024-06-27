
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
void insert_at_position(Node *head, int n)
{
    //Node *newNode = new Node(v);
    int pos=n/2;
    Node *tmp = head;
    if(pos%2==0){
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;

    }

    cout<<tmp->next->val<<endl;

    }
    else{
         for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;

    }

         cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }


}
int main()
{
    Node *head = NULL;
    int n=0;

    while (true)
    {
        int v;
        cin >> v;
        if(v== -1)
            break;
        insert_at_tail(head, v);
        n++;
    }

    insert_at_position(head, n);


    return 0;
}

