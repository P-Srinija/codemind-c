#include<stdio.h>
int main()
{
    int i,a,b,r,re,t;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        t=i;
        re=0;
        while(t!=0)
        {
        r=t%10;
        re=re*10+r;
        t=t/10;
        }
        if(re==i)
        printf("%d ",i);
    }
}