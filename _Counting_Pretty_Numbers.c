#include<stdio.h>
int main()
{
    int i,j,t,l,r,re,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&l,&r);
        s=0;
        for(j=l;j<=r;j++)
        {
            re=j%10;
            if(re==2||re==3||re==9)
            s=s+1;
        }
        printf("%d
",s);
    }
}