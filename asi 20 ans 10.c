#include<stdio.h>
int main()
{
    int i,l=0;
    char s[10],*p;
    printf("enter a string\n");
    gets(s);
    p=s;
    for(i=0;*(p+i);i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%c",*(p+i));
    }
    return 0;


}
