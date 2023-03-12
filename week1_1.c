#include<stdio.h>
void main()
{
    int i=1;
    while(i<=100)
    {
        if(i%3==0)
        {
            printf("Fizz\n");
        }
        else if(i%5==0)
        {
            printf("Buzz\n");
        }
        else
        printf("%d\n",i);
        i++;
    }
}