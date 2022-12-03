#include<stdio.h>
int main()
{
    int a[5];
    int i,t=0,*p;
    printf("enter elements in array to find their sum\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<5;i++)
    {
        t=*(p+i)+t;
    }
    printf("sum of elements -> %d\n",t);
    return 0;


}
