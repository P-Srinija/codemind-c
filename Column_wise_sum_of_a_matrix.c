#include<stdio.h>
int main()
{
    int r,c,i,j,s;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int t=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        s=0;
        for(j=0;j<r;j++)
        {
            s=s+arr[j][i];
        }
        printf("%d ",s);
    }
}