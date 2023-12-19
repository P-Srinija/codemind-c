#include<stdio.h>

int main()
{
    int a,n,i,s=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    a=(float)s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}