#include<stdio.h>
int main ()
{
    char s1[100];
    int i;
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        printf("%c ",s1[i]);
    }
    return 0;
}
