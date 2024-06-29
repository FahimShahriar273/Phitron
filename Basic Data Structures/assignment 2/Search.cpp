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

int srch(Node* head,int v)
{
    int index=0;
    Node * tmp=head;
    while(tmp != NULL)
    {
        if(tmp->val== v) return index;

        tmp=tmp->next;
        index++;

    }
    return index;




}



int minn(Node* head)
{
    Node * tmp=head;
    int mini=9999999999;
    while(tmp != NULL)
    {
        if(mini > tmp->val)
        {
            mini=tmp->val;
        }

        tmp=tmp->next;

    }
    return mini;




}

int maxx(Node* head)
{
    Node * tmp=head;
    int maxi=0;
    while(tmp != NULL)
    {
        if(maxi < tmp->val)
        {
            maxi=tmp->val;
        }

        tmp=tmp->next;

    }
    return maxi;




}

void print(Node* head)
{
    Node * tmp=head;

    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;

    }
    cout<<endl;




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
int t;
cin>>t;
while(t--){
    Node* head=NULL;
    Node * tail = NULL;


    int v;
    int n=0;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_tail(head,tail,v);
        n++;
    }
    int x;
    cin>>x;
    int i=srch(head,x);

    if(i<n) cout<<i<<endl;
    else cout<<"-1"<<endl;

}
}

