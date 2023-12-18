#include<stdio.h>
int main()
{
    int n,i,s=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    float a=(float)s/n;
    printf("%.2f",a);
}