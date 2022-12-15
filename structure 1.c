#include<stdio.h>
int main()
{
    struct prize
    {
        char code;
        int num;
    }winner1,winner2;
    winner1.code='k';
    winner1.num=985;
    printf("%c\t%d\n",winner1.code,winner1.num);
    scanf("%c%d",&winner2.code,&winner2.num);
    printf("%c\t%d\n",winner2.code,winner2.num);
    return 0;
}
