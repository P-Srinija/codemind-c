#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int t,r,u;
    for(i=n;i>=1;i--)
    {
        t=n;
        r=i;
        u=1;
        for(j=i;j>=1;j--)
        {
            printf("%d",u);
            u++;
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