#include<stdio.h>
int main()
{
    int n,i,j,s,c,co,so;
    float a;
    scanf("%d",&n);
    int ar[n];
    c=0;
    co=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                s=s+1;
            }
        }
        if(s==ar[i])
        {
            c=c+ar[i];
            co++;
            ar[i]=00;
            so=1;
        }
    }
    //printf("%d %d",c,co);
    a=(float)c/co;
    if(so!=1)
    printf("-1");
    else
    printf("%.2f",a);
}