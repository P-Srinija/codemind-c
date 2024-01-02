#include<stdio.h>
int main()
{
    char s[100];
    int i,j,n,c,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        k=0;
        for(j=0;s[j]!=NULL;j++)
        {
            if(s[j]>=48 && s[j]<=57)
            {
            k=1;
            break;
            }
        }
        if(k==1)
        printf("Yes
");
        else 
        printf("No
");
    }
}