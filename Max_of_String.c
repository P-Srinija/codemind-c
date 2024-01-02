#include<stdio.h>
int main()
{
    char s[100];
    int i;
    scanf("%[^
]s",s);
    char m=s[0];
    for(i=1;s[i]!=NULL;i++)
    {
        if(s[i]>m)
        m=s[i];
    }
    printf("%c",m);
}