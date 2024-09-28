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
        par[leadA] = leadB;
        group_size[leadB]+=group_size[leadA];
    }
}
class Edge
{
public:
    long long int a,b,c;
    Edge(long long int a, long long int b, long long int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
bool cmp(Edge x,Edge y)
{
    return x.c<y.c;
}
int main()
{
    long long int n,t;
    cin>>n>>t;

    initialize(n);
    vector<Edge>edgeList;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        edgeList.push_back(Edge(a,b,c));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);

    long long int cost=0;
    long long int use=0;
    for (Edge e:edgeList)
    {
        long long int leadA =find(e.a);
        long long int leadB =find(e.b);

        if (leadA==leadB)
        {
            continue;
        }
        else
        {
            union_set(e.a,e.b);
            cost+=e.c;
            use++;
            if (use==n-1)
            {
                break;
            }
        }
    }
    if (use==n-1)
    {
        cout <<cost<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
