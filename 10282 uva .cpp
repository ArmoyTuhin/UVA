#include<bits/stdc++.h>
using namespace std ;
map<string,string> mp;

int main()
{
    char s[25] ,a[11],b[11],l;
    while(gets(s))
    {
        if(s[0]=='\0')
        {
            break;
        }
        else
        cin>>a>>b;
        mp[a]=b;

    }
    while(gets(s))
    {
        if(mp.find(s)!=mp.end())
            cout<<mp[s]<<endl;
        else cout<<"eh"<<endl;
    }
    return 0;
}
