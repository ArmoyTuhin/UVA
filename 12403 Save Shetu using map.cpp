#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t,x,sum=0,i;
string s ;
    cin>>t;
        for(i=1; i<=t ; i++)
        {
          cin>>s;
          if(s[0]=='d')
          {
              cin>>x;
              sum=sum+x;
          }
          else if(s[0]=='r')
          {
           cout<<sum<<endl;
          }
        }
}
