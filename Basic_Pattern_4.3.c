#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int t;
    for(i=n;i>=1;i--)
    {
        t=1;
        for(j=n;j>=1;j--)
        {
            if(t%2!=0)
            {
            printf("1 ");
            t++;
            }
            else
            {
                printf("0 ");
                t++;
            }
        }
        printf("
");
    }
}