#include<stdio.h>
int main()
{
    int i,n,p;
    scanf("%d",&n);
    p=1;
    while(p*2<=n)
    {
        p=p*2;
    }
    int r=p*2;
    if(n-p<r-n)
    printf("%d",n-p);
    else
    printf("%d",r-n);
}