#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t,i,p,l,j;
 char s[104];
while(scanf("%d",&t)==1)
{
 if(t==0) return 0;
scanf("%s",s);
 p=strlen(s);
 l=p/t;
 for( i=0 ; i<p ; i+=l)
 {
     for(j= i+l-1 ; j>=i ; j--)
     {
         putchar(s[j]);
     }
 }
 cout<<endl;


}
return 0;
}
