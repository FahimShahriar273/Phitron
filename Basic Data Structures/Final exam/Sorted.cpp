#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int>s;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            s.insert(m);
        }
        for(int m:s)
        {
            cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}
