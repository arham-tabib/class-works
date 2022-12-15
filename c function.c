#include<stdio.h>
int add(int n1,int n2);
int main()
{
    int num1=22,num2=65,sum;
    printf("entering function\n");
    sum=add(num1,num2);
    printf("sum=%d\n",sum);
    return 0;
}
int add(int n1,int n2)
{
    printf("in function\n");
    int result;
    result=n1+n2;
    printf("exiting function\n");
    return result;
}
