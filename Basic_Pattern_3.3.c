#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int t=1;
    for(i=n;i>=1;i--)
    {
        t=1;
        for(j=i;j>=1;j--)
        {
            printf("%d ",t);
            t++;
        }
        printf("
");
    }
}