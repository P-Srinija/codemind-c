#include<stdio.h>
int main()
{
    int t,i,s=0;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        s=s+arr[i];
    }
    printf("%d",s);
}