#include<stdio.h>
int main()
{
    int t,i,x,y,f=0,g=0;
    scanf("%d",&t);
    int arr[t],ar[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&x,&y);
    int m=arr[0];
    for(i=0;i<t;i++)
    {
        if(arr[i]<x||arr[i]>y)
        {
            if(arr[i]>m)
            m=arr[i];
            g=g+1;
        }
    }
    if(g==0)
    printf("-1");
    else if(g>=1)
    printf("%d",m);
}