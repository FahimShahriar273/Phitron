#include <bits/stdc++.h>
using namespace std;

int n, m;
int d[1001][1001];
bool v[1001][1001];
vector<pair<int,int>>x={{2,1},{2, -1},{-2,1}, {-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};

bool valid(int i,int j)
{
    if (i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}
void bfs(int si,int sj)
{
    queue<pair<int, int>>q;
    q.push({si,sj});
    v[si][sj]=true;
    d[si][sj]=0;

    while(!q.empty())
    {
        pair<int,int>p=q.front();
        int a=p.first,b=p.second;
        q.pop();
        for (int i=0;i<8;i++)
        {
            int ci=a + x[i].first;
            int cj=b + x[i].second;
            if (valid(ci,cj)==true && v[ci][cj]==false)
            {
                q.push({ci,cj});
                v[ci][cj]=true;
                d[ci][cj]=d[a][b]+1;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int si,sj,di,dj;
        cin>>si>>sj;
        cin>>di>>dj;

        memset(v,false,sizeof(v));
        memset(d,-1,sizeof(d));
        bfs(si,sj);
        cout <<d[di][dj]<<endl;
    }
    return 0;
}
