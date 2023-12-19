#include<stdio.h>
int main()
{
    int t,a,i,e=0,o=0,c;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=t-1;i>=0;i--)
    {
        if(arr[i]%2==0)
        {
        printf("%d",i);
        break;
        }
    }
}