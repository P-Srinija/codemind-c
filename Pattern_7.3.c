#include<stdio.h>
int main()
{
	int i,j,n,k,l,m;
	scanf("%d",&n);
	l=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(j<i)
			printf(" ");
		}
		m=l;
		for(k=0;k<l;k++)
		{
			printf("%d ",m);
			m--;
		}
		l--;
		printf("
");
	}
}