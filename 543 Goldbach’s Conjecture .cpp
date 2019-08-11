#include<bits/stdc++.h>
using namespace std;
#define pb push_back()

bool marked[1000001];
vector<int> primes;
void sieve(int n)
{

    int j,k,i;


    for(i=4 ; i<=n ; i+=2)
    {
        marked[i]=true  ;
    }
    for(j=3; j<sqrt(n) ; j+=2)
    {
        if(!marked[i])
        {
            for(k=j*j ; k<n ; k+=j+j)
            {
                marked[k]=true ;
            }
        }
    }
    for(i=2 ; i<n ; i++)
    {
        if(!marked[i])
            primes.push_back(i);

    }

}
int main()
{
    int n,no,l=0, i,j,cnt,o,p,temp,root;
    sieve(1000000);
    while(cin>>n)
    {
        if(n==0)
            return 0;
        no=0;
        temp=0;
        o=0;
        p=0;
        for(j=0; primes[j]<=n  ; j++)
        {
            for(i=j; primes[i]<=n; i++)
            {
                if(primes[j]+primes[i]==n)
                {
                        o=primes[j];
                        p=primes[i];
                        no=1;
                        break;
                    }
                }
                if(no==1)
                break;


            }

        if(no==1)
        cout<<n<<" = "<<o<<" + "<<p<<endl;
        else cout<<"Goldbach's conjecture is wrong."<<endl;

    }
    return 0;
}


