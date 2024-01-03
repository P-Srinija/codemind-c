#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    int ar[50];
    int i,c=0,k=0,j;
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;s1[i]!=NULL;i++)
    {
        k++;
        if(s1[i]==s2[i])
        c++;
    }
    if(k==c)
    printf("Strings are Equal");
    else 
    printf("Strings are not Equal");
}