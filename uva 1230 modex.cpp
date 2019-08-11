#include<bits/stdc++.h>
using namespace std ;
int bigmod(long long int x, long long int y , long long int n)
{
    long long int k;
    if(y==0)
        return 1%n ;
           k=bigmod(x,y/2,n)%n;
 if(y%2==0)
{
    return (k*k)%n;
}
else
return (k*k*x)%n;
}
int main()
{
    long long int t,k,i;
     long long int x,y,n;
     cin>>t;
     for(i=1 ; i<=t+1 ; i++)
     {
         cin>>x;
         if(x==0)
            break;
         cin>>y>>n;

     k=bigmod(x,y,n);
     cout<<k<<endl;
     }
     return 0;
}
