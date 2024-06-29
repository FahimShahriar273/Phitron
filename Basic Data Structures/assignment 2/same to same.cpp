#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
bool same(Node* head1,Node* head2,int n1,int n2)
{

    Node * tmp1=head1;
    Node * tmp2=head2;

    if(n1>n2)
    {

        while(tmp1 != NULL)
        {
            if(tmp1->val != tmp2->val) return false;
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        return true;

    }
    else
    {
        while(tmp2 != NULL)
        {
            if(tmp1->val != tmp2->val) return false;
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        return true;


    }




}









void insert_tail(Node* &head,Node* &tail, int val)
{

    Node* newnode= new Node(val);

    if(head==NULL)
    {
        head= newnode;
        tail=newnode;
        return;

    }
    tail->next=newnode;
    tail=tail->next;



}

int main()
{

    Node* head1=NULL;
    Node * tail1 = NULL;
    Node* head2=NULL;
    Node * tail2 = NULL;


    int v;
    int n1=0,n2=0;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_tail(head1,tail1,v);
        n1++;
    }
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_tail(head2,tail2,v);
        n2++;
    }

    if(n1 != n2) {
            cout<<"NO"<<endl;
    return 0;}

    if(same(head1,head2,n1,n2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}


