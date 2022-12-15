#include<stdio.h>
int main ()
{
    char s1[1000],s2[1000];
    char i;
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='a'&&s1[i]<='z'&&s1[i]!=' ')
            s2[i]=s1[i]-32;
        else if(s1[i]>='A'&&s1[i]<='Z'&&s1[i]!=' ')
            s2[i]=s1[i]+32;
    }
    s2[i]='\0';
    printf("%s\n",s2);
    return 0;
}
