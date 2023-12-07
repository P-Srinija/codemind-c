#include<stdio.h>
int main()
{
    int l,b,w,c,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=((l+w+w)*(b+w+w))-(l*b);
    printf("%d",a*c);
}