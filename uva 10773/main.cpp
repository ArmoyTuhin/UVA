#include<stdio.h>
#include<math.h>
int main()
{
    int T,j;
    double d,v,u,t1,t2,ans;
    scanf("%d",&T);
    for(j=1;j<=T;j++){
        scanf("%lf%lf%lf",&d,&v,&u);
        if(v>=u || d==u&&u==v)
             printf("Case %d: can't determine\n",j);
       else
            {
                t1=d/sqrt(u*u-v*v);
                t2=d/u;
                ans=t1-t2;
            if(ans<=0)
            {
                printf("Case %d: can't determine\n",j);
            }
            else
            printf("Case %d: %.3lf\n",j,ans);
    }
}
}
