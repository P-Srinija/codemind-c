#include<stdio.h>
int main()
{
    int n,i,s=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        s=s+arr[i];
        else
        c=c+arr[i];
    }
    if(s<c)
    printf("%d",c-s);
    else
    printf("%d",s-c);
}