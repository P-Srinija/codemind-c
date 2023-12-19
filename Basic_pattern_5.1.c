#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int t,k;
    for(i=1;i<=n;i++)
    {
        t=n;
        for(j=1;j<=i;j++)
        {
            
            printf("%d",i);
        }
            k=i;
            while(k<t)
            {
                printf("*");
                k++;
            }
        printf("
");
    }
}