#include<stdio.h>
int main()
{
    int i,t,n,r,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int te=n,c=0;
        while(te!=0)
        {
            r=te%10;
            int s=1;
            for(j=1;j<=r;j++)
            {
                s=s*j;
            }
            c=c+s;
            te=te/10;
        }
        if(c==n)
        printf("Strong
");
        else
        printf("Not Strong
");
    }
}