#include<stdio.h>
void main()
{
    float r;
    printf("Enter radius of a circle");
    scanf("%f",&r);
    float d=2*r;
    float c=(2*22*r)/7;
    float a=(22*r*r)/7;
    printf("Diameter=%f\n",d);
    printf("Circumference=%f\n",c);
    printf("Area=%f",a);
}