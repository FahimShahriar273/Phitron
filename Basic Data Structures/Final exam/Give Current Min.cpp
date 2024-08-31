
#include <bits/stdc++.h>
using namespace std;

class Comparator
{
public:
    bool operator()(const int &a,const int &b)const
    {
        return a>b;
    }
};
int main()
{
    int n;
    cin >>n;
    priority_queue<int,vector<int>,Comparator>mh;

    for (int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        mh.push(x);
    }
    int q;
    cin>>q;
    for (int i=0;i<q;++i)
    {
        int command;
        cin>>command;

        if(command==0)
        {
            int x;
            cin>>x;
            mh.push(x);
            cout<<mh.top()<<endl;
        }
        else if(command==1)
        {
            if(!mh.empty())
            {
                cout<<mh.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(command==2)
        {
            if(!mh.empty())
            {
                mh.pop();
                if (!mh.empty())
                {
                    cout<<mh.top()<<endl;
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}
