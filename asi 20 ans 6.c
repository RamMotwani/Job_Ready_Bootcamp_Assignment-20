#include<stdio.h>
int main()
{
    int i,l=0;
    char s[20],*p;
    printf("enter a string");
    gets(s);
    p=s;
  for(i=0;*(p+i)!='\0';i++)
   l++;

  printf("%d",l);

}
