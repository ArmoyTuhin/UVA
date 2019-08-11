#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t,x,y,m,n,i;
    while(cin>>t)
    {
        if(t==0)
       return 0;
        cin>>n>>m;
        for(i=1; i<=t ; i++)
        {
            cin>>x>>y;
            if(x==n || y==m)
               //|| x==n&&y==m)
            {
                cout<<"divisa"<<endl;
            }
            else
                {
                if(x>n)
                {
                    if(y>m)
                     {
                         cout<<"NE"<<endl;
                     }
                    else
                     {
                      cout<<"SE"<<endl;
                     }
                }
             else if(x<n)
                {
                    if(y>m)
                        {cout<<"NO"<<endl ; }
                    else
                        {cout<<"SO"<<endl;}
                }
            }
        }


    }

}
