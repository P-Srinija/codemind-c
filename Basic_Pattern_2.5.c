#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int t=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+t);
        }
        t--;
        printf("
");
    }
}