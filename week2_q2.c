//Take two array as input, merge them and print it in reverse order using loop.
#include<stdio.h>
void main()
{
    int i,a[3],b[3],c[6];
    printf("enter elements for 1st array:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements for 2nd array:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<3;i++)
    {
        c[3+i]=b[i];
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n reverse order:");
    for(i=5;i>=0;i--)
    {
        printf("%d ",c[i]);
    }
}