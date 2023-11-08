#include<stdio.h>
int main()
{
    int i,x,f=0,s=1,n,c=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        n=f+s;
        if(x==n)
        c=c+1;
        f=s;
        s=n;
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}