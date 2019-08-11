#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
typedef pair<ll,ll>Pair;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
int main()
{
    ll n,i,t,j=1,o,k,c,op;

       while(cin>>n>>t)
       {
           k=0;
           c=0;
          if(n==0 && t==0)
        return 0;

        else{
        loop(i,1,10)
        {
          o=n%10;
          n=n/10;
          j=t%10;
          t=t/10;
          op=o+j+c;
          if(op>=10)
           {
              // cout<<o<<" "<<j<<"   "<<op<<" "<<i<<c<<endl;
             k++;
             c=op/10;
           }
          else {
          c=0;
          continue;}
        }
        if(k==0)
        cout<<"No carry operation."<<endl;
        else if(k==1)
             cout<<k<<" carry operation."<<endl;
        else
            cout<<k<<" carry operations."<<endl;
        }
       }

       return 0;
   }

