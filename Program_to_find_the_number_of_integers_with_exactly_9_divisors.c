#include<stdio.h>
int main()
{
    int i,n,j,s,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            s=s+1;
        }
        if(s==9)
        {
        c=c+1;
        printf("%d ",i);
        }
    }
    printf("
Total=%d",c);
}
