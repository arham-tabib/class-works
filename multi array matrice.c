#include<stdio.h>
int main()
{
    int a[200][200],i,j,sum,r,c;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a = %d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
