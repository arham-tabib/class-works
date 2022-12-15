#include<stdio.h>
void swap(n1,n2);
void output(r1,r2);
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("without swaping n1=%d  n2=%d\n",n1,n2);
    swap(n1,n2);
    return 0;
}
void swap(n1,n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    output(n1,n2);
}
void output(r1,r2)
{
    printf("r1=%d\tr2=%d\n",r1,r2);
}
