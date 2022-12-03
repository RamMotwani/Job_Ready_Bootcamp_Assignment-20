#include<stdio.h>
int main()
{
    int i,v=0,c=0;
    char *p;
    char s[20];
    printf("enter a string to find vowels and consonants\n ");
    gets(s);
    p=s;
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("the string have %d vowels\n",v);
    printf("the string have %d consonants\n",c);
    return 0;



}
