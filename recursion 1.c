#include<stdio.h>
int fact(int num);
int main()
{
    int N,out;
    scanf("%d",&N);
    out = fact(N);
    printf("%d",out);
    return 0;
}
int fact(int num)
{
    int facto;
    if(num==1) return 1;//bc
    facto = num*fact(num-1);//rc
    return facto;
}
