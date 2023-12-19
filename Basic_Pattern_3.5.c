#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int t;
    for(i=n;i>=1;i--)
    {
        t=1;
        for(j=i;j>=1;j--)
        {
            printf("%c ",64+t);
            t++;
        }
        printf("
");
    }
}