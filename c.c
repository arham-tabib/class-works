#include<stdio.h>
int main()
{ int i,k,n;
scanf("%d%d",&k,&n);
for(i=0;i<k;i++)
{if(n%10==0)
n=n/10;
else n=n-1;}
printf("%d\n",n);
return 0;
