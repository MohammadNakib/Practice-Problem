#include<stdio.h>
int main()
{
    int a,b,c,i,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((c>a && a>b) || (b>a && a>c))
            printf("Case %d= %d\n",i,a);
        if((a>b && b>c) ||(c>b && b>a))
            printf("Case %d= %d\n",i,b);
        if((a>c && c>b) || (b>c && c>a))
            printf("Case %d= %d\n",i,c);
    }
    return 0;
}
