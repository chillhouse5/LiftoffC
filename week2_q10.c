//Write a program to find the total number of alphabets , digits and special characters in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    int a=0,d=0,sp=0,i;
    char s[20];
    printf("Enter a string : ");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            a++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            d++;
        }
        else
        {
            sp++;
        }
        
    }
    printf("alphabets:%d\n",a);
    printf("digits:%d\n",d);
    printf("special characters:%d\n",sp);
}