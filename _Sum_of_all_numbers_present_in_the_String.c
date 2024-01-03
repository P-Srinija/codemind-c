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
        if(s[i]>=48&&s[i]<=57)
        l=l+(s[i]-48);
    }
    printf("%d",l);
    
   
}