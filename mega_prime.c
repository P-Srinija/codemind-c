#include<stdio.h>
int main()
{
	int n,s=0,r,c,d=0,su=0,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		s=s+1;
	}
	if(s==2)
	{
		while(n!=0)
		{
			r=n%10;
			c=0;
			d=d+1;
			n=n/10;
			for(j=1;j<=r;j++)
			{
				if(r%j==0)
				c=c+1;
			}
			if(c==2)
			su=su+1;
		}
		if(su==d)
	    printf("Mega Prime");
	    else
	    printf("Not Mega Prime");
	}
	else
	printf("Not Mega Prime");
}