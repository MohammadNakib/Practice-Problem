#include<stdio.h>
int main()
{
    int a,b,c,i,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a>b && b>c) ||(c>b && b>a))
            printf("Case %d: %d\n",i,b);
        else if((c>a && a>b) || (b>a && a>c))
            printf("Case %d: %d\n",i,a);
        else
            printf("Case %d: %d\n",i,c);
    }
    return 0;
}
