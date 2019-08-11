#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string str,str2;
    int t,k;
   while(cin>>t)
   {
    int o=0;
     int p=0;
    int k=0,j;
    if(t==0)
        return 0;

        cin>>str;
         k=str.size()/t;

p=str.size()-k;
for(j=1 ; j<=t; j++)
{
    reverse(str.begin()+o, str.end()-p);
          o+=k;
          p-=k;

      }
      cout<<str;
   }

//
//      }
}

