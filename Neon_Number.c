#include<stdio.h>
int main()
{
    int n,r,sq,s=0;
    scanf("%d",&n);
    int t=n;
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        s=s+r;
        sq=sq/10;
    }
    if(t==s)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    
}