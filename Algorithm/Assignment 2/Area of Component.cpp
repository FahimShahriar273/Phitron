#include <bits/stdc++.h>
using namespace std;

char matrix[1005][1005];
bool v[1005][1005];
long long int lev[1005][1005];
long long int n, m;

long long int dx[4]={-1,0,1,0};
long long int dy[4]={0,1,0,-1};

bool valid(long long int x,long long int y)
{
    if(x>=0 && x<n && y>=0 && y<m && matrix[x][y]=='.')
    {
        return true;
    }
    else
    {
        return false;
    }
}
long long int bfs(long long int sx, long long int sy)
{
    queue<pair<long long int, long long int>> q;
    q.push({sx,sy});
    v[sx][sy]=true;
    long long int ar=1;

    while(!q.empty())
    {
        pair<long long int,long long int>node=q.front();
        q.pop();
        long long int nr=node.first;
        long long int nc=node.second;

        for(long long int i=0;i<4;i++)
        {
            long long int cx=nr+dx[i];
            long long int cy=nc+dy[i];

            if (valid(cx,cy) && v[cx][cy]==false)
            {
                v[cx][cy]=true;
                q.push({cx,cy});
                ar++;
            }
        }
    }
    return ar;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >>n>>m;
    for(long long int i=0;i<n;i++)
    {
        for(long long int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    long long int count=0;
    bool isExist=false;
    priority_queue<long long int,vector<long long int>,greater<long long int>>comp;
    for(long long int i=0;i<n;i++)
    {
        for(long long int j=0;j<m;j++)
        {
            if(matrix[i][j]=='.'&& v[i][j]==false)
            {
                long long int ar=bfs(i,j);
                comp.push(ar);
                isExist=true;
                count++;
            }
        }
    }
    if (isExist)
    {
        cout<<comp.top()<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
