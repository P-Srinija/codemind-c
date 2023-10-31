#include<stdio.h>
int main()
{
    int i,n,r,p;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        p=i*n;
        printf("%d x %d = %d
",n,i,p);
    }
}