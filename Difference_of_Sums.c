#include<stdio.h>
int main()
{
    int i,n,s=0,c=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(i*i);
        c=c+i;
    }
    d=(c*c)-s;
    printf("%d",d);
}