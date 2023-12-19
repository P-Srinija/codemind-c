#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int t,k,p;
    for(i=1;i<=n;i++)
    {
        t=n;
        p=1;
        for(j=1;j<=i;j++)
        {
            
            printf("%d",p);
            p++;
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