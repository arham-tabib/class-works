#include<stdio.h>
char  change (char alpha,int *ptr);
int main()
{
    char code ='t';
    int num=456;
    code = change(code, &num);
    printf("%c\t%d",code,num);
    return 0;
}
char  change (char alpha,int *ptr)
{
    alpha ='z';
    *ptr = 854;
    return alpha;
}
