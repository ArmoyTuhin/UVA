#include<bits/stdc++.h>
using namespace std;

int main()
{
    int B,S,i=1;

    while(scanf("%d%d",&B,&S)==2)
    {
        if(B==0 && S==0)
        {
            break;
        }
        else if(B==0 || B==1)
        {
            printf("Case %d: :-\\\n",i);
        }
        else if(B<=S)
        {
            printf("Case %d: :-|\n",i);
        }
        else if(B>S)
        {
            printf("Case %d: :-(\n",i);
        }

        i++;
    }

    return 0;
}
