#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int t=n,s=0,r;
    while(t!=0)
    {
        int r=t%10;
        s++;
        t=t/10;
    }
    if(x==1) r=10;
    if(x==2) r=100;
    if(x==3) r=1000;
    if(x==4) r=10000;
    int h=s-x,l;
    if(h==1) l=10;
    if(h==2) l=100;
    if(h==3) l=1000;
    if(h==4) l=10000;
    if(h==5) l=100000;
    if(h==6) l=1000000;
    int u=n/l;
    int v=n%r;
    if(v>u)
    printf("%d",v-u);
    else
    printf("%d",u-v);
}