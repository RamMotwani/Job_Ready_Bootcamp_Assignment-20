#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("enter two no.s to find which is maximum\n");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    printf("maximum no. is %d",*p>*q?*p:*q);
    return 0;
}


