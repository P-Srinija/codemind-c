#include<stdio.h>
int main()
{
    int i,j,n,s,c=0,k=0;
    scanf("%d",&n);
    int arr[n];
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            s=s+1;
        }
        if(s==arr[i])
        {
            c=c+1;
            arr[i]=0;
        }
    }
    printf("%d",c);
}