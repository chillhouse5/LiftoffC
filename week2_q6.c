//Write a program to find maximum occurring integer in an array.
#include<stdio.h>
void main()
{
    int i,j,temp,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0,elem;
    for(i=0;i<n;i++)
    {
         int count=1;
         for(j=i+1;j<n;j++)
         {
             if (a[j]==a[i])
             {
                 if(count>max)
                 {
                     elem=a[j];
                     max=count;
                 }
             }
         }
    }
    printf("maximum occurring integer in the array is %d\n",elem);

}