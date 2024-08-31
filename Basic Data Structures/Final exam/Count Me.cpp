#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
        {
        string s;
        getline(cin,s);
        map<string,int>w;
        stringstream ss(s);
        string word;
        int pos=0;
        int max=0;
        string FrequentWord;

        while(ss>>word)
            {
            pos++;
            w[word]++;
            if(w[word]>max || (w[word]==max && w[word]<w[FrequentWord]))
            {
                max=w[word];
                FrequentWord=word;
            }
        }
        cout<<FrequentWord<<" "<<max<<endl;
    }
    return 0;
}
