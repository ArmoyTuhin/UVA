#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>m;
    char a[20],b[20],mn[25];
    while(gets(mn))
    {
        if(mn[0]=='\0')
        break;
        sscanf(mn,"%s %s",a,b);
        m[b]=a;
    }
    while(gets(mn))
    {
        if(m.find(mn)==m.end())
            cout<<"eh"<<endl;
        else cout<<m[mn]<<endl;;
    }

    return 0;
}
