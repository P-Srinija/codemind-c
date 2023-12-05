#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    if(a%b==0)
    printf("0");
    else
    {
        while(a%b!=0)
        {
            c=c+1;
            a=a+1;
        }
        printf("%d",c);
    }
}