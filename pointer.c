#include<stdio.h>
int main()
{
    int num=54;
    int *ptr;
    ptr = &num;
    *ptr=65;
    printf("%d\n",num);
    printf("%d\n",&num);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    return 0;
}
