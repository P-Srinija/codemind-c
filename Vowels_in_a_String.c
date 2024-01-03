#include<stdio.h>
int main()
{
    char s[100];
    int i,c;
    char v;
    scanf("%[^
]s",s);
    scanf(" %c",&v);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==v)
        {
            printf("True
");
            printf("%d",i);
            c=1;
            break;
        }
    }
    if(c!=1)
    printf("False");
    return 0;
}