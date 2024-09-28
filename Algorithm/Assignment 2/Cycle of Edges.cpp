#include <bits/stdc++.h>
using namespace std;

const long long int N=1e5+5;

long long int par[N];
long long int group_size[N];
long long int lev[N];

void initialize(long long int n)
{
    for (long long int i=0;i<n;i++)
    {
        par[i]=-1;
        group_size[i]=1;
        lev[i]=0;
    }
}
long long int find(long long int node)
{
    if (par[node]==-1)
    {
        return node;
    }
    long long int lead=find(par[node]);
    par[node]=lead;

    return lead;
}
void union_set(long long int node1,long long int node2)
{
    long long int leadA=find(node1);
    long long int leadB=find(node2);

    if (group_size[leadA]>group_size[leadB])
    {
        par[leadB]=leadA;
        group_size[leadA]+=group_size[leadB];
    }
    else
    {
        par[leadA]=leadB;
        group_size[leadB]+=group_size[leadA];
    }
}
int main()
{
    long long int count=0;
    long long int n,t;
    cin>>n>>t;

    initialize(n);

    bool cycle=false;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        long long int leadA=find(x);
        long long int leadB=find(y);
        if (leadA==leadB)
        {
            count++;
        }
        else
        {
            union_set(x,y);
        }
    }
    cout<<count<<endl;
    return 0;
}
