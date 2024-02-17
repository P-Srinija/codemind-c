#include<stdio.h>
int main()
{
    int n,s,r,i,j;
    scanf("%d%d",&n,&s);
    r=s+((n*(n+1))/2)-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||j==n-1||i==j)
            {
                printf("%d ",r);
                r--;
            }
            else if(i>j)
            printf("  ");
            else
            {
                printf("  ");
                r--;
            }
        }
        printf("
");
    }
}