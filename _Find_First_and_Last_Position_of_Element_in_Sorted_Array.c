#include<stdio.h>
int main()
{
    int i,j=0,n,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
        printf("%d ",i);
        j++;
         break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            printf("%d ",i);
            j++;
            break;
        }
    }
    if(j==0)
    printf("-1 -1");
}