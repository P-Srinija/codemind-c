#include<stdio.h>
#include<math.h>
int main()
{
    int i,t,n,sq;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        sq=int(pow(n,0.5));
        if(n==sq*sq)
        printf("True
");
        else 
        printf("False
");
    }
}