#include<stdio.h>
int main()
{
    int i,x,f=0,s=1,n;
    scanf("%d",&x);
    printf("%d %d ",f,s);
    for(i=1;i<=(x-2);i++)
    {
        n=f+s;
        printf("%d ",n);
        f=s;
        s=n;
    }
    
}