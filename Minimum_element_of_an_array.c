#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<m)
        m=arr[i];
    }
    printf("%d",m);
}