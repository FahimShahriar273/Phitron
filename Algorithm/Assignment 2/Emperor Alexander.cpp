
#include <bits/stdc++.h>
using namespace std;

const long long int N=1e5+5;
long long int par[N];
long long int group_size[N];

void initialize(long long int n)
{
    for (long long int i=1;i<=n;i++)
    {
        par[i]=-1;
        group_size[i]=1;
    }
}
long long int find(long long int node)
{
    if (par[node]==-1)
    {
        return node;
    }
    return par[node]=find(par[node]);
}
void union_set(long long int node1, long long int node2)
{
    long long int leadA=find(node1);
    long long int leadB=find(node2);

    if (leadA!=leadB)
    {
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
}
class edge
{
public:
    long long int a,b,c;
    edge(long long int a,long long int b,long long int c):a(a),b(b),c(c){}
};
bool cmp(edge x,edge y)
{
    return x.c<y.c;
}
int main()
{
    long long int n,m;
    cin>>n>>m;
    initialize(n);

    vector<edge>edgeList;

    for (long long int i=0;i<m;i++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        edgeList.push_back(edge(a,b,c));
    }

    sort(edgeList.begin(),edgeList.end(),cmp);

    long long int cost=0;
    long long int use=0;

    for (edge & e:edgeList)
    {
        long long int leadA=find(e.a);
        long long int leadB=find(e.b);

        if (leadA!=leadB)
        {
            union_set(e.a,e.b);
            cost +=e.c;
            use++;
            if (use==n-1)
                break;
        }
    }
    if (use==n-1)
    {
        long long int roads=m-use;
        cout<<roads<<" "<<cost<<endl;
    }
    else
    {
        cout<<"Not Possible"<<endl;
    }
    return 0;
}
