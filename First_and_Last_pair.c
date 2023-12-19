#include<stdio.h>
int main()
{
    int n,i,j,c,s;
    scanf("%d",&n);
    int arr[n];
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    c=n-1;
    s=n-1;
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            printf("%d %d ",arr[i],arr[s]);
            s=s-1;
        }
    }
    else
    {
        for(j=0;j<(n/2);j++)
        {
            printf("%d %d ",arr[j],arr[c]);
            c=c-1;
        }
        printf("%d 0",arr[(n/2)]);
    }
}