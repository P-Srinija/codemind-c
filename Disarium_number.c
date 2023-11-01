#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,r,s,c=0,d=0;
    scanf("%d",&n);
    int t=n;
    int o=n;//original value of num 
    while(t!=0)
    {
        c++;
        t=t/10;
    }
    while(n!=0)
    {
        r=n%10;
       
        s=pow(r,c);
        c--;
        n=n/10;
        d=d+s;
    }
    if(d==o)
    printf("True");
    else
    printf("False");
    
}