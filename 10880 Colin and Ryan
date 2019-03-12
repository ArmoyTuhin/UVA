#include<bits/stdc++.h>
using namespace std ;
#define pb push_back
int main()
{
    long long int i,j,o=0,a,b,q,n,l,t;
    long long int arr[10001];
    cin>>t;
   // cout<<"con"<<endl;
    while(t--)
    {
       // cout<<"con"<<endl;
        cin>>a>>b;
        q=a-b;
        n=0;
        if(a==b)
        {
            ++o;
            cout<<"Case #"<<o<<": 0"<<endl;
        }


        else
        {

            for(i=1 ; i<=sqrt(q) ; i++)
            {
                if(q%i==0)
                {
                    arr[n++]=i;
                    if(q/i!=i)
                    {
                        arr[n++]=q/i;
                    }
                }
            }
            sort(arr,arr+n);
            ++o;
            cout<<"Case #"<<o<<":";
            for(j=0; j<n; j++)
            {
                if(arr[j]>b)
                 cout<<" "<<arr[j];
            }
            cout<<endl;
        }

    }
    return 0;
}
