#include <bits/stdc++.h>
using namespace std;

class pairs
{
  public:
       bool operator()(const pair<string,int>&a,const pair<string,int>&b)
{
    if (a.first==b.first)
        {
        return a.second>b.second;
    }
    return a.first<b.first;
}
};
int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>>list(n);

    for (int i=0;i<n;i++)
        {
        cin>>list[i].first>>list[i].second;
    }
    sort(list.begin(),list.end(),pairs());

    for (const auto &p:list)
        {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
