#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0,s=0;
        for(j=i+1;j<n;j++)
        {
            c++;
            if(a[j]>a[i])
            {
                printf("%d ",c);
                s=1;
                break;
            }
        }
        if(s==0)
        printf("0 ");
    }
}