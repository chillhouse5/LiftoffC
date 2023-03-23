//Write a program to sort a given array using function.
#include<stdio.h>
int sorted(int*);
void main()
{
    int i,a[5];
    printf("enter elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sorted(a);    
    printf("sorted array:");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
int sorted(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
        }
    }
    return a;
}