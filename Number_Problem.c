#include<stdio.h>
int main()
{
    int a,b,d,s;
    scanf("%d%d",&a,&b);
    d=(b-a);
    s=(a-b);
    if(a==b)
    printf("0");
    else if(a<b)
    {
        if(d%10==0)
        {
        printf("%d",d/10);
        }
        else
        {
            printf("%d",(d/10)+1);
        }
    }
    else if(a>b)
    {
        if(s%10==0)
        {
            printf("%d",s/10);
        }
        else
        {
            printf("%d",(s/10)+1);
        }
    }
    
}