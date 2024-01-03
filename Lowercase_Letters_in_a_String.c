#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=97&&s[i]<=124)
        c++;
    }
    printf("%d",c);
}