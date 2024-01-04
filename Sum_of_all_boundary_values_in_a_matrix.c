#include<stdio.h>
int main()
{
    int r,c,i,j,s=0;
    scanf("%d%d",&r,&c);
    int ar[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0||j==0)
            s=s+ar[i][j];
            else if(i==r-1||j==c-1)
            s=s+ar[i][j];
        }
    }
    printf("%d",s);
}