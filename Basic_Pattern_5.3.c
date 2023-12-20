#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int t,r;
    for(i=n;i>=1;i--)
    {
        t=n;
        r=i;
        for(j=i;j>=1;j--)
        {
            printf("%d",i);
        }
        while(r<t)
        {
            printf("*");
            r++;
        }
        printf("
");
    }
    
}