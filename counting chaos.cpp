#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t,h,m,k,i,l;
    cin>>t;
    while(t--)
    {
        scanf("%d:%d",&h,&m);
        l=h;

        for(i=1 ; i<24 ; i++)
        {
            k=(l%10)*10+(l/10);

             if(k<=59 && k>=m )
            {
                if(l<10)
                {
                    cout<<0<<l<<":"<<k<<endl;
                    break;
                }
                else if(k<10)
                {
                    cout<<l<<":"<<0<<k<<endl;
                    break;
                }
                else
                {
                    cout<<l<<":"<<k<<endl;
                    break;
                }

            }
            else if (k>59 )
            {
                l++;
            }
            else if (l>h && k<m )
            {
                if(l<10)
                {
                    cout<<0<<l<<":"<<k<<endl;
                    break;
                }
                else if(k<10)
                {
                    cout<<l<<":"<<0<<k<<endl;
                    break;
                }
                else
                {
                    cout<<l<<":"<<k<<endl;
                    break;
                }

            }

        else if( k<m )
        {
            l++;
            k=(l%10)*10+(l/10);
            if(k!=60)
            {
                if(l<10)
                {
                    cout<<0<<l<<":"<<k<<endl;
                    break;
                }
                else if(k<10)
                {
                    cout<<l<<":"<<0<<k<<endl;
                    break;
                }
                else
                {
                    cout<<l<<":"<<k<<endl;
                    break;
                }

            }
        }
        else
            l++;

    }

}
return 0;
}
