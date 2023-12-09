#include<stdio.h>
int main()
{
    int x,y,p;
    scanf("%d%d%d",&x,&y,&p);
    if((y-x)%(2*p)==0)
    printf("YES");
    else
    printf("NO");
    
}