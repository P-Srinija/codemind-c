#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&n);
    t=n;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
            printf("%d ",j+1);
            else
            printf(" ");
        }
        t--;
        printf("
");
    }
}