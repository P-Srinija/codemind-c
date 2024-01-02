#include<stdio.h>
int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65&&s[i]<=91)
        printf("%c",s[i]+32);
        else
        printf("%c",s[i]);
    }
}