#include<stdio.h>
int main()
{
    int n1,n2,i,s=0,j;
    scanf("%d%d",&n1,&n2);
    for(i=n1+n2+1;;i++)
    {
        s=s+1;
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c=c+1;
        }
        if(c==2)
        break;
    }
    printf("%d",s);
}