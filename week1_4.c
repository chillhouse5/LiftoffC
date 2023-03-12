#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter 2 numbers");
    scanf("%d %d",&n,&m);char c;
    printf("Input '+' for adddition\n'-' for subtraction\n'*' for multiplicaation\n'/' for division\n");
    fflush(stdin);
    scanf("%c",&c);
    switch(c)
    {
        case '+':int a=n+m;
                printf("ADDITION=%d",a);
                break;
        case '-':int b=n-m;
                printf("SUBTRACTION=%d",b);
                break;
        case '*':int g=n*m;
                printf("MULTIPLICATION=%d",g);
                break;
        case '/':double t=(double)n/m;
                printf("DIVISION=%f",t);
                break;
        default:printf("WRONG INPUT");
    }
} 