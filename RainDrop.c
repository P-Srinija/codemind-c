#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0&&x%5!=0&&x%7!=0)
    printf("Pling");
    else if(x%3!=0&&x%5==0&&x%7!=0)
    printf("Plang");
    else if(x%3!=0&&x%5!=0&&x%7==0)
    printf("Plong");
    else if(x%3==0&&x%5==0&&x%7!=0)
    printf("PlingPlang");
    else if(x%3==0&&x%5==0&&x%7==0)
    printf("PlingPlangPlong");
    else
    printf("%d",x);
}