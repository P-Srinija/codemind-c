#include<stdio.h>
int main()
{
    int n,k,x,y,t,h;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    t=k*x+(n-k)*x;
    h=k*x+(n-k)*y;
    if(t<h)
    printf("%d",t);
    else
    printf("%d",h);
    
}