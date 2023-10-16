#include<stdio.h>
int main()
{
    int u;
    float c,b;
    scanf("%d",&u);
    if(u<=199)
    {
    c=1.20;
    }
    else if(u>=200&&u<400)
    {
    c=1.50;
    }
    else if(u>=400&&u<600)
    {
    c=1.80;
    }
    else if(u>=600)
    {
    c=2.00;
    }
    b=u*c;
    if(b>400)
    printf("%.2f",(15/100.0)*b+b);
    else
    printf("%.2f",b+100.0);
    
    
    
}