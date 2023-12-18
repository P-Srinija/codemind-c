#include<stdio.h>
int main()
{
    int n,z,i,s;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
        s=1;
    }
    if(s==1)
    printf("True");
    else
    printf("False");
}