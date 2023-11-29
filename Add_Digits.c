#include<stdio.h>
int main()
{
    int n,r,s=0,re,c=0,rem,d=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    while(s!=0)
    {
        re=s%10;
        c=c+re;
        s=s/10;
    }
    while(c!=0)
    {
        rem=c%10;
        d=d+rem;
        c=c/10;
    }
    printf("%d",d);
}