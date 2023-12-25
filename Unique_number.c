#include<stdio.h>
int main()
{
    int n,i,j,t,r,k=1,c,s=0,m=0;
    scanf("%d",&n);
    t=n;
    int arr[n];
    while(t!=0)
    {
        r=t%10;
        arr[k]=r;
        k++;
        t=t/10;
    }
    for(i=0;i<k;i++)
    {
        c=0;
        for(j=0;j<k;j++)
        {
            if(arr[i]==arr[j])
            c++;
        }
        if(c>1)
        {
            m++;
            break;
        }
    }
    if(m==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}