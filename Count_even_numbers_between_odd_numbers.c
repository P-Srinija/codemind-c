#include<stdio.h>

int main()
{
    int a,n,i,s=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i-1]%2!=0 && arr[i+1]%2!=0)
            s=s+1;
        }
    }
    printf("%d",s);
}