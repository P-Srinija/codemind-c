#include<stdio.h>
int main()
{
    int i,m,n,s=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        s=s+1;
    }
    printf("%d",s);
}