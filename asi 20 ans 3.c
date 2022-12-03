#include<stdio.h>
void sort(int *, int );
int main()
{
    int i;
    int a[5];
    printf("enter an array for sorting\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,5);
    for(i=0;i<5;i++)
    {
        printf("%d ",*(a+i));
    }
return 0;
}
void sort(int *p, int size)
{
 int r,i,s;
 for(r=1;r<size;r++)
 {
     for(i=0;i<size-r;i++)
     {
         if(*(p+i)> *(p+i+1))
         {
             s=p[i];
             p[i]=p[i+1];
             p[i+1]=s;
         }
     }
 }
}
