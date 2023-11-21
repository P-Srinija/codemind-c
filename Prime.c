#include<stdio.h>
int main()
{
    int i,x,s=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        s=s+1;
    }
    if(s==2)
    printf("Prime");
    else
    printf("Not Prime");
}