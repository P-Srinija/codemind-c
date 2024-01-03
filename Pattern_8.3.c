#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int t=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||i+j==(n-1))
            printf("%d",t);
            else
            printf(" ");
        }
        t--;
        printf("
");
    }
}