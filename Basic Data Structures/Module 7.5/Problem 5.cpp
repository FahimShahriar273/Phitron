
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node * next;

    Node(int val)
    {

        this->next=NULL;
        this->val=val;
    }

};

void print(Node * head)
{
    Node* tmp= head;
    while (tmp != NULL)
    {
        cout<<tmp->val<< " ";
        tmp=tmp->next;

    }
    cout<<endl;

}


void sortt(Node* head)
{

    for( Node* i=head; i->next != NULL; i=i->next)
    {
        for( Node* j=i->next; j != NULL; j=j->next)
        {
            if(i->val < j->val)
                swap(i->val, j->val);


        }

    }
}

void insert_at_tail(Node* &head, Node* &tail,int val)
{

    Node* newnode= new Node(val);

    if(head==NULL)
    {
        head= newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}




int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;

    int v;
    // int n1=0,n2=0;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head1,tail1,v);


    }
    sortt(head1);
    print(head1);


}


