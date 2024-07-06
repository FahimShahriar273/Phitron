#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }

};

bool palindrome(Node* head, Node * tail)
{

    Node * tmph = head;
    Node * tmpt = tail;

    while (tmph != NULL)
    {

        if ( tmph->val != tmpt-> val) return false;
        tmph=tmph->next;
        tmpt= tmpt->prev;


    }
    return true;



}

void rv (Node* tail)
{
    Node* tmp= tail;
    while (tmp!=NULL)
    {

        cout<<tmp->val<<" ";
        tmp=tmp->prev;


    }
}
void print (Node* head)
{
    Node* tmp= head;
    while (tmp!=NULL)
    {

        cout<<tmp->val<<" ";
        tmp=tmp->next;


    }


}

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node* newnode= new Node(val);

    if(head==NULL)
    {
        head= newnode;
        tail = newnode;
        return ;

    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;

}

int main()
{
    Node* head= NULL;
    Node* tail=NULL;
    int v;
    while (true)
    {

        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_at_tail(head,tail,v);

    }
    if(palindrome(head,tail)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    //print(head);
    //rv(tail);

}
