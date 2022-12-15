#include<stdio.h>
void  change (int *ptr,int *ptr1)
{
    int temp;
    temp=*ptr;
    *ptr=*ptr1;
    *ptr1=*ptr;
}
int main()
{
    int num=456,num1=564;
    change(&num, &num1);
    printf("%d\t%d",num,num1);
    return 0;
}

