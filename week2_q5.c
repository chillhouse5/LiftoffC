//Write a C program to copy the elements of one array into another array
#include<stdio.h>
void main()
{
    int i,a[5],b[5];
    printf("enter elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
         b[i]=a[i];
    }
    printf("elements of 2nd array:");
    for(i=0;i<5;i++)
    {
         printf("%d ",b[i]);
    }
}