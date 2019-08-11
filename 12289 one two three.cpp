#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t,x,sum=0,i,k=0;
string s ;
cin>>t;
while(t--)
{
    cin>>s;
    k=s.size();
    if(k>3)
    {
        cout<<3<<endl;
    }
    else if(s[0]=='t' && s[1]=='w' ||s[1]=='w'&& s[2]=='o' || s[0]=='t' && s[2]=='o')
    {
        cout<<2<<endl;
    }
    else
        cout<<1<<endl;
}
return 0;
}

