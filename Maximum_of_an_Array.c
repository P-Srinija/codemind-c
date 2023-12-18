#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    int arr[n];
    m=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>m)
        m=arr[i];
    }
    printf("%d",m);
}