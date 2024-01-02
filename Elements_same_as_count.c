#include<stdio.h>
int main()
{
    int i,j,n,s,c;
    scanf("%d",&n);
    int arr[n];
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
            printf("%d ",arr[i]);
            arr[i]=0;
            c=1;
        }
    }
    if(c!=1)
    printf("-1");
}