#include<bits/stdc++.h>
using namespace std ;
int main()
{
long long  int b,s;
 int n=1;
 double k,l,j=1.0000000;
while(cin>>b>>s)
{
    if(b==0 && s==0)
        return 0;

k=(double)s/b;
if(b==0)
    k=0;
l=(double)(s-1)/(b-1);
if( b==0 && s>1)
     {
         cout<<"Case "<<n<<":"<<" :-\\"<<endl;
     }
 else if(min(k,j)<min(l,j))
    cout<<"Case "<<n<<":"<<" :-)"<<endl;
else if(min(k,j)== min(l,j))
 {
      //cout<<min(k,j);
//cout<<min(l,j);
    cout<<"Case "<<n<<":"<<" :-|"<<endl;
 }
   else if (min(k,j)>min(l,j))
    cout<<"Case "<<n<<":"<<" :-("<<endl;
n++;
}


 return 0;
}
















/// other way




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int B,S,i=1;

    while(scanf("%d%d",&B,&S)==2)
    {
        if(B==0 && S==0)
        {
            break;
        }
        else if(B==0 || B==1)
        {
            printf("Case %d: :-\\\n",i);
        }
        else if(B<=S)
        {
            printf("Case %d: :-|\n",i);
        }
        else if(B>S)
        {
            printf("Case %d: :-(\n",i);
        }

        i++;
    }

    return 0;
}
