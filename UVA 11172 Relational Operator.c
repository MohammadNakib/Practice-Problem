#include<stdio.h>
int main()
{
    int i,T,a,b;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            printf(">\n");
        else if (a<b)
            printf("<\n");
        else
        printf("=\n");
    }
    return 0;
}
