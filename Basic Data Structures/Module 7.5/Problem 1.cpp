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
    Node* head2=NULL;
    Node* tail2=NULL;

    int v;
    int n1=0,n2=0;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head1,tail1,v);
        n1++;

    }
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head2,tail2,v);
        n2++;

    }

    if(n1==n2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;





}
