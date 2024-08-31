
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class comparator
{
public:
    bool operator()(Student a,Student b)
    {
        if(a.marks<b.marks)
        {
            return true;
        }
        else if(a.marks>b.marks)
        {
            return false;
        }
        else
        {
            if(a.roll>b.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,comparator>pq;

    while(n--)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int command;
        cin>>command;

        if(command==0)
        {
            string name;
            int roll, marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);

            cout<<pq.top().name<<" ";
            cout<<pq.top().roll<<" ";
            cout<<pq.top().marks<<" \n";
        }
        else if(command==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top().name<<" ";
                cout<<pq.top().roll<<" ";
                cout<<pq.top().marks<<" \n";
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(command==2)
        {
            if(!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout<<pq.top().name<<" ";
                    cout<<pq.top().roll<<" ";
                    cout<<pq.top().marks<<"\n";
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
