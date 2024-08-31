#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int Val;
    Node* left;
    Node* right;

    Node(int Val)
    {
        this->Val=Val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;

    Node* root;
    if(val==-1)
    {
        root=NULL;
    }
    else
    {
        root=new Node(val);
    }
    queue<Node*>q;

    if(root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int m,n;
        cin>>m>>n;
        Node* left,*right;
        if (m==-1)
        {
            left=NULL;
        }
        else
        {
            left=new Node(m);
        }
        if (n==-1)
        {
            right=NULL;
        }
        else
        {
            right=new Node(n);
        }
        p->left=left;
        p->right=right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int a=0;
int maxHight(Node* root)
{
    if (root==NULL)
    {
        return 0;
    }
    if (root)
    {
        a=a+1;
    }
    int m= maxHight(root->left);
    int n= maxHight(root->right);
    return max(m,n)+1;
}
int main()
{
    Node* root=input_tree();
    if(pow(2,maxHight(root))-1==a)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
