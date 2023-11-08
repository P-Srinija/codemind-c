#include<stdio.h>
int main()
{
    int i,a,b,l;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if((a*i)%b==0)
        {
            l=a*i;
            break;
        }
    }
    printf("%d",(a*b)/l);
}