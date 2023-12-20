#include<stdio.h>
int main()
{
    int t,i,x,y,f,g,c;
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
            printf("%d ",arr[i]);
            c=1;
        }
        else if(arr[i]>y)
        {
            printf("%d ",arr[i]);
            c=1;
        }
    }
   
    if(c!=1)
    printf("-1");
}