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
    ll n,i,t,j=1;
    int arr[101];
    cin>>t;
    while(t--)
    {

        cin>>n;
        loop(i,0,n)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<"Case "<<j<<": "<<arr[n/2]<<endl;
        j++;
    }


    return 0;
   }
