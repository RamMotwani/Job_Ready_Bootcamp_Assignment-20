#include<stdio.h>
void string_swap(char *,char *);
int main()
{
    char s1[10],s2[10];
    printf("enter string 1\n");
    gets(s1);
    printf("enter string 2\n");
    gets(s2);
    string_swap(&s1,&s2);
    printf("%s %s\n",s1,s2);
    return 0;
}
void string_swap(char *p, char *q)
{
    char c;
    int i;
    for(i=0;i<10;i++)
    {

            c=*p;
            *p=*q;
            *q=c;
            p++;
            q++;

    }
}
