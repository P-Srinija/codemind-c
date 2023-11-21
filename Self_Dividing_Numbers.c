#include<stdio.h>
int main()
{
    int i,n,m,t,r,s,c;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        t=i;
        c=0;
        s=0;
        while(t!=0)
        {
            r=t%10;
            if(r!=0 && i%r==0)
            {
            c=c+1;
            }
            t=t/10;
         	s=s+1;
        }
        if(s==c)
        printf("%d ",i);
        
    }
}