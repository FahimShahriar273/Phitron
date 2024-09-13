#include <bits/stdc++.h>
#define INF 1e18
using namespace std;

const int MAX=1000;

int main()
{
    long long int n,m;
    cin>>n>>m;

    long long int adj[MAX][MAX];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i==j)
            {
                adj[i][j]=0;
            }
            else
            {
                adj[i][j]=INF;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        adj[a][b]=min(adj[a][b],c);
    }
    for (int k=0;k<n;k++)
    {
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (adj[i][k]<INF && adj[k][j]<INF)
                {
                    adj[i][j]=min(adj[i][j],adj[i][k] + adj[k][j]);
                }
            }
        }
    }
    long long int q;
    cin>>q;
    while(q--)
    {
        long long int x,y;
        cin>>x>>y;
        x--;
        y--;
        if (adj[x][y]==INF)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<adj[x][y]<<endl;
        }
    }
    return 0;
}
