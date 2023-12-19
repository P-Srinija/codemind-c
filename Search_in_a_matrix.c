#include<stdio.h>
int main()
{
    int r,c,i,j,s=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int t;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&t);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==t)
            s=1;
        }
    }
    printf("%d ",s);
}