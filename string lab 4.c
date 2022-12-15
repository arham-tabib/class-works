#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,count=0;
    printf("input the string\n");
    gets(s1);
    printf("input the character to find frequency\n");
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[i]);
        count++;
    }
    printf("the frequency of %s is : %d",s2,count);
    return 0;
}
