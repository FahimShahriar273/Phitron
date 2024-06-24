

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

void insert_at_tail(Node*&head, int v)
{
    Node* newNode= new Node(v);

    if(head == NULL)
    {

        head = newNode;
        return;

    }

    Node* tmp = head;
    while(tmp->next !=NULL)
    {
        tmp=tmp->next;
    }

    tmp -> next = newNode;



}
void print_linked_list(Node * head)
{
    cout<<endl;
    cout<<"linked list: ";
    Node* tmp = head;
    while(tmp !=NULL)
    {
        cout<< tmp->val<<" ";
        tmp=tmp->next;
    }

    cout<<endl;

}
void interatposition(Node* head, int pos, int v)
{
    Node* newNode= new Node(v);
    Node* tmp=head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp=tmp->next;

    }

    newNode->next = tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Insert at position "<<pos<<endl;

}

int main()
{

    Node * head = NULL;

    while(1)
    {
        cout<<"Op 1: Insert"<<endl;
        cout<<"Op 2: Print"<<endl;
        cout<<"Op 3: insert at any position"<<endl;
        cout<<"Op: termiate"<<endl;

        int op;

        cin>>op;
        if(op==1)
        {

            cout<<"enter the value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);



        }
        else if(op==2)
        {
            print_linked_list(head);
            cout<<endl;

        }

        else if(op==3)
        {

            int pos,v;
            cout<<"enter the position"<<endl;
            cin>>pos;
            cout<<"enter the value"<<endl;
            cin>>v;
            interatposition(head,pos,v);


        }
        else if(op==4)
        {

            break;
        }




    }










}


