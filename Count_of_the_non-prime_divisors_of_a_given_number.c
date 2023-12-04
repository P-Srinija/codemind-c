#include<stdio.h>
int main()
{
    int n,i,j,s,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            s=0;
            for(j=1;j<=i;j++)
            {
            if(i%j==0)
            s=s+1;
            }
            if(s>2)
            c=c+1;
        }
    }
    printf("%d",c);
}