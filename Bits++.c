#include<stdio.h>
int main()
{
    char s[100];
    int t,i,j,c=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",s);
        if(s[1]=='+')
        c++;
        else
        c--;
    }
    printf("%d",c);
}