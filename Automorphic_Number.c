#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    s=n*n;
    int c=0,t=n;
    while(t!=0)
    {
        c=c+1;
        t=t/10;
    }
    if(c==1)
    {
        if(n==s%10)
        printf("Automorphic Number");
        else
        printf("Not an Automorphic Number");
    }
    else if(c==2)
    {
        if(n==s%100)
        printf("Automorphic Number");
        else
        printf("Not an Automorphic Number");
    }
    else if(c==3)
    {
        if(n==s%1000)
        printf("Automorphic Number");
        else
        printf("Not an Automorphic Number");
    }
}