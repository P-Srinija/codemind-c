#include<stdio.h>
int main()
{
    int n,i,t,te,r,r2,re=0,sq,rs=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        re=re*10+r;
        t=t/10;
    }
    sq=re*re;
    te=sq;
    while(te!=0)
    {
        r2=te%10;
        rs=rs*10+r2;
        te=te/10;
    }
    //printf("%d %d",re*re,rs);
    if(rs==n*n)
    printf("True");
    else
    printf("False");
}