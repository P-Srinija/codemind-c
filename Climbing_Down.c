#include<stdio.h>
int main()
{
    int a,b,x,y,w,j,m,n;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    w=(a/x);
    j=(b/y);
    m=60/x;
    n=60/y;
    if(m*a==n*b)
    printf("Both");
    else if(m*a<n*b)
    printf("Walter");
    else 
    printf("Jesse");
}
  