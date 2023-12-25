#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    for(i=0;i*i<=n;i++)
    {
        if(i*i==n)
        {
            printf("True");
            c++;
            break;
        }
    }
    if(c==0)
    printf("False");
}