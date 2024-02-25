#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,o=0,e=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        e++;
    }
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        o++;
    }
    printf("%d",2*e*o);
}