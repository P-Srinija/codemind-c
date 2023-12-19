#include<stdio.h>
int main()
{
    int r,c,s=0,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            s=s+arr[i][j];
        }
    }
    printf("%d",s);
}