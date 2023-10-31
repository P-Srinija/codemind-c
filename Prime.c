#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        s=s+1;
    }
    if(s==2)
    printf("Prime");
    else
    printf("Not Prime");
}