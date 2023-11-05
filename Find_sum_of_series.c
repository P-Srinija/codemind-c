#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    double s=0;
    for(i=1;i<=x;i++)
    {
      s=s+(1.0/i);
    }
    printf("%.2f",s);
    
}