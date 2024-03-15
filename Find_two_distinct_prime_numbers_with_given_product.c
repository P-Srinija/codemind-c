#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],c=0,f=0;
    for(i=1;i<=n;i++)
    {
    	if(n%i==0) f++;
	}
	if(f==2) printf("-1");
    for(i=1;i<=n;i++)
    {
       int t=i,s=0;
       for(j=1;j<=t;j++)
       {
           if(t%j==0)
           s++;
       }
       if(s==2)
       {
           a[c]=i;
           c++;
       }
    }
    
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(a[i]*a[j]==n)
            {
                printf("%d %d",a[i],a[j]);
                break;
            }
        }
    }
}