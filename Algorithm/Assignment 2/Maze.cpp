#include <bits/stdc++.h>
using namespace std;

const int MAX_N=1005;
char adj[MAX_N][MAX_N];
bool v[MAX_N][MAX_N];
int dis[MAX_N][MAX_N];
int n,m;
pair<int,int>par[MAX_N][MAX_N];
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m || adj[i][j]=='#')
        return false;
    return true;
}
void bfs(int x,int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    v[x][y]=true;
    dis[x][y]=0;
    par[x][y]={-1,-1};

    while(!q.empty())
    {
        pair<int,int>p=q.front();
        int a=p.first;
        int b=p.second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int cx=a+d[i].first;
            int cy=b+d[i].second;

            if (valid(cx,cy) && !v[cx][cy])
            {
                q.push({cx,cy});
                v[cx][cy]=true;
                dis[cx][cy]=dis[a][b]+1;
                par[cx][cy]={a, b};
            }
        }
    }
}
int main()
{
    cin >>n>>m;

    pair<int,int>sr;
    pair<int,int>de;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>adj[i][j];
            if (adj[i][j]=='R')
            {
                sr={i,j};
            }
            if (adj[i][j]=='D')
            {
                de={i,j};
            }
        }
    }
    memset(v,false,sizeof(v));
    memset(dis,-1,sizeof(d));

    int x=sr.first;
    int y=sr.second;
    bfs(x,y);
    int dx=de.first;
    int dy=de.second;

    if(v[dx][dy])
    {
        while(dx!=x || dy!=y)
        {
            if (adj[dx][dy]=='.')
            {
                adj[dx][dy]='X';
            }
            int tempx=dx;
            int tempy=dy;
            dx=par[tempx][tempy].first;
            dy=par[tempx][tempy].second;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<adj[i][j];
        }
        cout<<endl;
    }
    return 0;
}
