#include<stdio.h>
int main()
{
    int t,a,i,e=0,o=0,c;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        e=e+arr[i];
        else
        o=o+arr[i];
    }
    if(o<e)
    printf("%d",e-o);
    else
    printf("%d",o-e);
    
    
}