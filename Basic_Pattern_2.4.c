#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int t=n;
    for(i=1;i<=n;i++)
    {
        int c=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",t);
            t++;
            c++;
        }
        t=t-c;
        printf("
");
    }
}