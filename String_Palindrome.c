#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0,l=0,r,k;
    char v;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    r=c-1;
    while(l<r&&s[l]==' ')
    {
        l++;
    }
    while(l<r&&s[l]==' ')
    {
        r--;
    }
    while(l<r)
    {
        if(s[l]!=s[r])
        {
            printf("Not Palindrome");
            k=1;
            break;
        }
        l++;
        r--;
    }
    if(k!=1)
    printf("Palindrome");
}