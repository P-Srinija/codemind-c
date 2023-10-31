#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&n);
    r=n%10;
    while(n!=1)
    {
        n=n/10;
    }
    printf("%d",r+n);
    
}