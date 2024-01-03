#include<stdio.h>
int main()
{
    char s[100];
    int ar[50];
    int i,c=0,k=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
        	//printf("%d ",s[i]-48);
            c=c+(s[i]-48);
        }
    }
    printf("%d",c);
   
}