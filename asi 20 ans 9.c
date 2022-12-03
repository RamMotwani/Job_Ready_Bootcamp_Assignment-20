#include<stdio.h>
int main()
{
    int i,*p;
    int a[5];
    printf("enter 5 elements of an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=5-1;i>=0;i--)
    {
        printf("%d",*(p+i));
    }
    return 0;

}
