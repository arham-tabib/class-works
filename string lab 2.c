#include<stdio.h>
int main()
{
    char s1[100];
    int i,count=1;
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==' ')
            count++;
    }
    printf("total number of words in the string : %d\n",count);
    return 0;
}
