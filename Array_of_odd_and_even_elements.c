#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            ar[j]=arr[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ar[j]=arr[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}