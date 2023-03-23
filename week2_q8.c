//Write a program to find the number of vowels and consonants in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    int i,v=0,c=0;
    char s[20];
    printf("enter a word:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i<='Z']))
        {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        v++;
        else
        c++;
        }
    }
    printf("vowels=%d\n",v);
    printf("consonants=%d\n",c);
}