#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
typedef pair<ll,ll> Pair;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();

int main()
{
    int i,k,sum,a,b,j;

while(scanf("%d %d",&a,&b)!=EOF)
{
    sum=0;
    k=0;
    j=a;
  for(i=1; ; i++)
{
    k=a/b;
    sum=sum+k;
    if(k+a%b>=b)
    {
        a=k+a%b;
    }
      else break;
}

cout<<sum+j<<endl;
}
return 0;
   }


