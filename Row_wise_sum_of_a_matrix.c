#include<stdio.h>
int main()
{
    int r,c,i,j,s;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            s=s+arr[i][j];
        }
        printf("%d ",s);
    }
}