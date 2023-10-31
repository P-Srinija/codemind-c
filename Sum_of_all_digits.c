#include<stdio.h>
int main()
{
    int x,r,s=0;
    scanf("%d",&x);
    while(x%10!=0)
    {
        r=x%10;
        x=x/10;
        s=s+r;
    }
    printf("%d",s);
}