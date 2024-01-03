#include<stdio.h>
int main()
{
    char s[100];
    int ar[50];
    int i,c=1,k=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==32)
        {
        	//printf("%d ",s[i]-48);
            c++;
        }
    }
    printf("%d",c);
   
}