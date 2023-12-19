#include<stdio.h>
int main()
{
    int t,a,i,s=0,c;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++)
    {
        s=s+arr[i];
    }
    a=(float)s/t;
    for(i=0;i<t;i++)
    {
        if(arr[i]==a)
        c=1;
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}