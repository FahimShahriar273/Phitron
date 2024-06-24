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
    cout<<endl;
    cout<<"Insert at position "<<pos<<endl;

}
void inserthead(Node* &head,int v)
{
    Node* newNode= new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"inserted at head"<<endl;


}

void deletPosition(Node* &head,int pos)
{
    Node * tmp=head;
    for (int i=1; i<=pos-1; i++)
    {
        tmp=tmp->next;
    }

    Node* dltnode=tmp->next;
    tmp->next=dltnode->next;
    delete dltnode;


}

void deletHead(Node* &head){
    Node* dltnode=head;
    head=head->next;
    delete dltnode;



}

int main()
{

    Node * head = NULL;

    while(1)
    {
        cout<<"Op 1: Insert"<<endl;
        cout<<"Op 2: Print"<<endl;
        cout<<"Op 3: insert at any position"<<endl;
        cout<<"Op 4: insert at head"<<endl;
        cout<<"Op 5: dlt any position"<<endl;
        cout<<"Op 6: dlt head"<<endl;
        cout<<"Op 7: termiate"<<endl;

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
            if(pos==0)
            {
                inserthead(head,v);
            }
            else
                interatposition(head,pos,v);

        }
        else if(op==4)
        {
            int v;
            cout<<"enter the value"<<endl;
            cin>>v;
            inserthead(head,v);


        }

        else if(op==5)
        {
            int pos;

            cout<<"enter the position"<<endl;
            cin>>pos;
             if(pos==0){
                deletHead(head);
            }
            else
            deletPosition(head,pos);



        }

        else if(op==6){

                deletHead(head);


        }

        else if(op==7)
        {

            break;
        }

    }
}



