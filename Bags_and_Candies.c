#include<stdio.h>
int main()
{
    int n,k,m,b;
    scanf("%d%d%d",&n,&k,&m);
    b=n%(k*m);
    if(b==0)
    printf("%d",n/(k*m));
    else 
    printf("%d",n/(k*m)+1);
}