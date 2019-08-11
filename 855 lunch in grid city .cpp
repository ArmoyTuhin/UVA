#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int a,b,c ,a2[50001],a3[50001] ,i,j,k,t,d;
   cin>>t;
   while(t--)
   {
   cin>>a>>b>>c;
   for(i=0 ; i<c ;i++)
   {
       cin>>a2[i]>>a3[i];
   }
   sort(a2,a2+c);
   sort(a3,a3+c);
   d=(c-1)/2;
   cout<<"(Street: "<<a2[d]<<", Avenue: "<<a3[d]<<")"<<endl;
   }
   return 0;
}
