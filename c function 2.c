#include<stdio.h>
void evenodd(int n);
void output(int R);
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    evenodd(num);
    return 0;
}
void evenodd(int n)
{
    int res;
    res=(n%2);
    output(res);
}
void output(int R)
{
    if(R==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
