#include<stdio.h>
int main()
{
    int i,j,n,h;
    scanf("%d",&n);
    int k=1;
    for(i=n-1;i>=1;i--)
    {
        int t=i;
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        while(t<n)
        {
            printf("%d",k);
            t++;
        }
        k++;
        printf("
");
    }
    for(h=1;h<=n;h++)
    {
        printf("%d",n);
    }
}