#include<stdio.h>
int main()
{
    int r,c,i,j,k=0,s,co,m=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int rc[c];
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            s=s+arr[i][j];
        }
        rc[k]=s;
        k++;
    }
    for(i=0;i<c;i++)
    {
        co=0;
        for(j=0;j<r;j++)
        {
            co=co+arr[j][i];
        }
        rc[k]=co;
        k++;
    }
    for(i=0;i<k;i++)
    {
        if(rc[i]>m)
        m=rc[i];
    }
    printf("%d",m);
}