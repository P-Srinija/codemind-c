#include<stdio.h>
int main()
{
    int i,n,r,v=0;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        v=v*10+r;
        n=n/10;
    }
    if(i==v)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}