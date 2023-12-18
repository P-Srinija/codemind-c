#include<stdio.h>
int main()
{
    int t,s=0,i;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    printf("%d",s);
}