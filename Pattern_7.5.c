#include<stdio.h>
int main()
{
	int i,j,n,k,l,m=65;
	scanf("%d",&n);
	l=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(j<i)
			printf(" ");
		}
		for(k=0;k<l;k++)
		{
			printf("%c ",m);
		}
		m++;
		l--;
		printf("
");
	}
}