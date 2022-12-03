#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("For swaping enter two no.s\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
void swap(int *p, int *q)
{
    int s;
    s=*p;
    *p=*q;
    *q=s;

}

