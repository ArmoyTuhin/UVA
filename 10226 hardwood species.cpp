#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t , count ;
    double  k;
    string s ;
    cin>>t;
    while(t--)
    {
        map<string,int> mp;
        getchar();
        getchar();
        count=0;
        while(getline(cin,s))
        {n
           if(s.compare("")==0)
          {
               break;
          }
                count++;
            mp[s]++;
        }
        for(map<string,int>::iterator it=mp.begin(); it!=mp.end(); it++)
        {
             k=it->second ;
            cout<<it->first<<" ";
            printf("%.4lf\n",(k*100.0)/count);

        }
        cout<<endl;
    }

}
