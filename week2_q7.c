//Write a program to move all the negative elements to one side of the array
#include<stdio.h>
void main()
{
    int i,j,temp;
    int a[7]={2,-97,11,-6,-10,-4,3};
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]>a[j])
            {
               temp=a[i];
             a[i]=a[j];
             a[j]=temp; 
            }
        }
    }
    for(i=0;i<7;i++)
    {
        printf("%d \n",a[i]);
    }
}