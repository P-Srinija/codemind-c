#include<stdio.h>
int main()
{
    int n,r,s=0,o=0,e=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+1;
        if(r%2==0)
        {
        e=e+1;
        }
        else
        {
        o=o+1;
        }
        n=n/10;
    }
    if(s==e)
    printf("Even");
    else if(s==o)
    printf("Odd");
    else
    printf("Mixed");
}