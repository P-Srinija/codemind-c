#include<stdio.h>
int main()
{
    int i,x,s=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        s=s+i;
    }
    printf("%d",s);
}