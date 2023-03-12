#include<stdio.h>
void main()
{
    int n,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
       int y=n%10;
       n/=10;
       s+=y;
    }while(n>0);
    printf("\nSUM-%d",s);

}