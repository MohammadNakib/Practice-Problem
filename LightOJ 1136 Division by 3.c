#include <stdio.h>
int main()
{
    int i,T,res,x,z,a,b,c,d;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d", &a, &b);
        x=(a/3)*2;
        c=a%3;
        if(c==2)
            x=x+1;

        z=(b/3)*2;
        d=b%3;
        if(d==2)
            z=z+1;

        res=z-x;
        res=res+1;
        if(c==1)
            res=res-1;
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
