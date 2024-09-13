#include <bits/stdc++.h>
using namespace std;

int n,m;
char c[1001][1001];
bool v[1001][1001];
vector<pair<int,int>>x={{0,1},{0,-1},{-1,0},{1, 0}};

bool valid(int i,int j)
{
    if (i<0 || i>=n || j<0 || j>=m)
    {
        return false;
    }
    if (c[i][j]=='-')
    {
        return false;
    }
    if (v[i][j])
    {
        return false;
    }
    return true;
}
void dfs(int si,int sj)
{
    v[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci=si + x[i].first;
        int cj=sj + x[i].second;

        if (valid(ci,cj))
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
    cin >>n>> m;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    memset(v,false,sizeof(v));

    int si,sj,di,dj;
    cin>>si>>sj;
    cin>>di>>dj;
    dfs(si,sj);
    if (v[di][dj])
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
