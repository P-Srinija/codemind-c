#include<stdio.h>
int main()
{
    int n,r,s;
    scanf("%d",&n);
    r=n%10;
    while(n!=0)
    {
        s=n%10;
        if(r<s)
        r=s;
        n=n/10;
    }
    printf("%d",r);
}