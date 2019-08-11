#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int sum,su,i,j,t,k,l,o=1;
    int arr[ 101];
while(cin>>t)
{
    sum=0;
    if(t==0)
    return 0;
 for(i=0 ; i<t ; i++)
 {
     cin>>arr[i];
     sum=sum+arr[i];
 }

    k=sum/t;
    su=0;
    for(j=0,l=0 ; j<t ; j++)
    {
        if(arr[j]>k)
        {
            l=arr[j]-k;
            su=su+l;
        }
    }
  cout<<"Set #"<<o<<endl;
cout<<"The minimum number of moves is "<<su<<"."<<endl;
cout<<endl;
o++;
}
 return 0;

}
