#include<stdio.h>
int main()
{
    int t,i,x,y,f,g,c=0;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<t;i++)
    {
        if(arr[i]<x)
        {
            c=c+arr[i];
        }
        else if(arr[i]>y)
        {
            c=c+arr[i];
        }
    }
    printf("%d",c);
}