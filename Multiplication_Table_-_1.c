#include<stdio.h>
int main()
{
    int i,n,p;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        p=i*n;
        printf("%d x %d = %d
",n,i,p);
    }
}