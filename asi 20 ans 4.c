#include<stdio.h>
int main()
{
    int x=5,*a,**b,***c;
    a=&x;
    b=&a;
    c=&b;
    printf("x= %d\naddress-of-x= %d\na= %d\naddress-of-a= %d\nb= %d\naddress-of-b= %d\nc= %d\naddress-of-c= %d\n",x,a,a,b,b,c,c);
}
