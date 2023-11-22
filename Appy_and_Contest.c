#include<stdio.h>
int main()
{
    int i,j,t,n,a,b,k,f,v;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        f=0;
        v=0;
        for(j=1;j<=n;j++)
        {
            if(j%a==0&&j%b!=0)
            f=f+1;
            else if(j%a!=0&&j%b==0)
            v=v+1;
        }
        if(f+v>=k)
        printf("Win
");
        else
        printf("Lose
");
    }
}