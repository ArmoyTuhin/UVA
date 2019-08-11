#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,j,i,t;
    int arr[101];
    cin>>t;
    while(t--)
    {
        j=0;
        cin>>k;
      for(i=0 ; i<k ; i++)
      {
          cin>>arr[i];
      }
        sort(arr,arr+k);
        j=2*(arr[k-1]-arr[0]);
        cout<<j<<endl;
    }
}
