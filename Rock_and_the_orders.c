#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,a,b;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    a=a1+a2+a3;
    b=b1+b2+b3;
    if(a>=150&&b>=150)
    {
        if((a+b+c)<(a+b+d+d))
        printf("YES");
        else
        printf("NO");
    }
    else if(a>=150&&b<150)
    {
        if((a+b+c+d)<(a+b+d+d))
        printf("YES");
        else if((a+b+c+d)==(a+b+d+d))
        printf("NO");
        else
        printf("NO");
    }
    else
    printf("NO");
    
}