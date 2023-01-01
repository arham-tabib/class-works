#include<stdio.h>
int main()
{
    int arr[200][300],i,j,sum=0,row,col;
    printf("enter the row and col size :\n");
    scanf("%d%d",&row,&col);
    printf("enter the elements of the array\n");
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("A = ");
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("row totals =");
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            sum+=arr[i][j];
        }
        printf("\t row%d total = %d\n",i+1,sum);
        sum=0;
    }
    sum=0;
     printf("col totals =");
    for(j=0;j<col;++j)
    {
        for(i=0;i<row;++i)
        {
            sum+=arr[i][j];
        }
        printf("\t col%d total = %d\n",j+1,sum);
        sum=0;
    }

    return 0;
}
